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
     * @param string t - title of the book.
     * @param string a - author of the book.
     * @param string i - isbn code of the book.
     */
    Book(std::string& t, std::string& a, std::string& i)
        : title(t), author(a), isbn(i) {}
    virtual ~Book();

    /**
     * @brief Displays the information about the book.
     */
    void display() {
        std::cout << "Title: " << title << '\n'
                  << "Author: " << author << '\n'
                  << "ISBN: " << isbn << std::endl;
    }
};

#endif