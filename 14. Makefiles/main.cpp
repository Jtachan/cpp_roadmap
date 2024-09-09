#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

#include <vector>
#include <iostream>

int main() {
    // Defining the vector of pointers to the shapes:
    std::vector<Shape*> shapes;

    // Adding three different shapes to the vector:
    shapes.push_back(new Rectangle(2, 3));
    shapes.push_back(new Circle(4));
    shapes.push_back(new Triangle(2, 2, 2));

    // Printing the shape parameters and recovering memory:
    for (auto& shape : shapes) {
        std::cout << "\n*********\nShape: " << shape.getName()
            << "\nArea: " << shape.area() << "\nPerimeter: " 
            << shape.perimeter() << '\n';

        delete shape;
    }
    std::cout << std::endl;
    
    // Checking if the array is empty:
    std::cout << "Is array empty after deleting the shapes?: " << shapes.empty() << std::endl;

    // Cleaning the array and checking again:
    shapes.clear();
    std::cout << "Is array empty after deleting the shapes?: " << shapes.empty() << std::endl;

    return 0;
}
