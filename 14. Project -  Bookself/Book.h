#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

/**
 * @brief Base class for generic a book.
 *
 * Class representing a generic book.
 * Private attributes: titile, author, isbn.
 * Public methods: display()
 */
class Book {
   private:
    std::string title;
    std::string author;
    std::string isbn;

   public:
    /**
     * @brief Constructor of the class.
     * @param title - title of the book.
     * @param author - author of the book.
     * @param isbn - isbn code of the book.
     */
    Book(std::string& title, std::string& author, std::string& isbn);
    virtual ~Book();

    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getIsbn() const;

    /**
     * @brief Displays the information about the book.
     */
    void display() const;
};

Book::Book(std::string& t, std::string& a, std::string& i)
    : title(t), author(a), isbn(i) {}

std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
std::string Book::getIsbn() const { return isbn; }

void Book::display() const {
    std::cout << "Title: " << title << '\n'
              << "Author: " << author << '\n'
              << "ISBN: " << isbn << std::endl;
}

#endif