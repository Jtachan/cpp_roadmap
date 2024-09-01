#ifndef LIBRARY_H
#define LIBRARY_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "Book.h"
#include "EBook.h"

/**
 * @brief Represents a library that manages a collection of books.
 *
 * This class allows adding, removing and displaying books stored
 * in a library. It can handle both physical books and ebooks.
 */
class Library {
   private:
    std::vector<Book*> books;

   public:
    // No constructor is needed, as it is desired for the attribute
    // to be initialized empty.

    // Destructor:
    ~Library();

    /**
     * @brief Adds a books to the library.
     *
     * This function adds a book (or ebook) to the collection.
     * Whenever the book is added, the original object is removed.
     *
     * @param book - A unique pointer to a book object.
     */
    void addBook(Book* book);

    /**
     * @brief Displays all the books in the library.
     *
     * This function iterates over the library's collection and
     * displays the details of each book.
     */
    void listBooks() const;

    /**
     * @brief Search a book by its title.
     *
     * @param title - Exact title of the book to look for.
     * @param displayMatch - If true, the book information is displayed on the
     * terminal (only if the book is found).
     * @return bool - True if the book is found, otherwise false.
     */
    bool searchByTitle(const std::string& title, bool displayMatch) const;

    /**
     * @brief Saves the information of the library in a file.
     *
     * This functions stores the information of all the books in
     * the collection in a file. Afterwards, it removes all the books
     * in the collection.
     *
     * @param filename - Name of the output file.
     * @return bool - True if the save was successful, false otherwise.
     */
    bool saveToFile(const std::string& filename);

    /**
     * @brief Loads the library from a file.
     *
     * This function updates the library with the books from a file.
     * It avoids storing copies of the same book.
     *
     * @param filename - Name of the input file.
     * @return bool - True if the load was successful, false otherwise.
     */
    bool loadFromFile(const std::string& filename);
};

void Library::addBook(Book* book) { books.push_back(book); }

void Library::listBooks() const {
    if (books.empty()) {
        std::cout << "No books stored in the library." << std::endl;
    } else {
        for (const auto& book : books) {
            book->display();
            std::cout << '\n';
        }
        std::cout << std::endl;
    }
}

bool Library::searchByTitle(const std::string& title, bool displayMatch) const {
    for (const auto& book : books) {
        if (book->getTitle() == title) {
            if (displayMatch) {
                book->display();
            }
            return true;
        }
    }
    return false;
}

bool Library::saveToFile(const std::string& filename) {
    if (books.empty()) {
        std::cerr << "The library does not contain any book." << std::endl;
        return false;
    }

    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "Error opening the file." << std::endl;
        return false;
    }

    for (const auto& book : books) {
        // Using 'dynamic_cast' to identify if the book is an ebook.
        // This returns a pointer to the EBook or a nullptr if the object is not
        // an ebook.
        EBook* ebook = dynamic_cast<EBook*>(book);
        if (ebook) {
            outFile << "EBook:" << ebook->getTitle() << ','
                    << ebook->getAuthor() << ',' << ebook->getIsbn() << ','
                    << ebook->getSize() << '\n';
        } else {
            outFile << "Book:" << book->getTitle() << ',' << book->getAuthor()
                    << ',' << book->getIsbn() << '\n';
        }
        delete book;
    }
    books.clear();
    outFile.close();
    return true;
}

bool Library::loadFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "Error opening the reading file: " << filename
                  << std::endl;
        return false;
    }

    std::string bookType, title, author, isbn, fileSizeStr;
    while (std::getline(inFile, bookType, ':')) {
        // Obtaining the common parameters:
        std::getline(inFile, title, ',');
        std::getline(inFile, author, ',');

        // Checking the book is not already in the library:
        bool inLibrary = searchByTitle(title, false);
        if (inLibrary) {
            // Skip to the next iteration if the book is already stored:
            continue;
        }

        if (bookType == "EBook") {
            std::getline(inFile, isbn, ',');
            std::getline(inFile, fileSizeStr);
            double fileSize = std::stod(fileSizeStr);

            addBook(new EBook(title, author, isbn, fileSize));
        } else {
            std::getline(inFile, isbn);
            addBook(new Book(title, author, isbn));
        }
    }

    return true;
}

Library::~Library() {
    for (auto& book : books) {
        delete book;
    }
}

#endif