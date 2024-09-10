#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
   protected:
    std::string name;

   public:
    // Constructor of a shape to define its name:
    Shape(const std::string& shapeName);

    // Virtual functions to override:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    // Common destructor for all shapes:
    virtual ~Shape() = default;

    // Function to get the name:
    std::string getName() const;
};

Shape::Shape(const std::string& shapeName) : name(shapeName) {};
std::string Shape::getName() const { return name; }

#endif