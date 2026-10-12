
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    // Initialize a rectangle with both dimensions set to 1
    Rectangle() : width(1.0), length(1.0) {}

    // Create a rectangle using given dimensions and validate them through setters
    Rectangle(double w, double l) : width(1.0), length(1.0) {
        setWidth(w);
        setLength(l);
    }

    // Functions for retrieving the rectangle's dimensions
    double getWidth() const { return width; }
    double getLength() const { return length; }

    // Update the width or length only when the supplied value is positive
    bool setWidth(double w) {
        if (w <= 0) {
            return false;
        }
        width = w;
        return true;
    }

    bool setLength(double l) {
        if (l <= 0) {
            return false;
        }
        length = l;
        return true;
    }

    // Find the area by multiplying the two dimensions
    double calculateArea() const {
        return length * width;
    }

    // Determine the perimeter by doubling the sum of the dimensions
    double calculatePerimeter() const {
        return 2 * (length + width);
    }
};

// Output the name, dimensions, area, and perimeter of a rectangle
void display(const string& name, const Rectangle& r) {
    cout << name << ":\n";
    cout << "  Width     = " << r.getWidth() << "\n";
    cout << "  Length    = " << r.getLength() << "\n";
    cout << "  Area      = " << r.calculateArea() << "\n";
    cout << "  Perimeter = " << r.calculatePerimeter() << "\n\n";
}

int main() {
    cout << fixed << setprecision(2);

    // Example 1: Create an object using the default constructor
    cout << " Example 1: Default rectangle \n";
    Rectangle rect1;
    display("rect1", rect1);

    // Example 2: Initialize a rectangle with specified dimensions
    cout << " Example 2: Rectangle created with dimensions \n";
    Rectangle rect2(6.0, 11.0);
    display("rect2", rect2);

    // Example 3: Assign dimensions to an existing rectangle
    cout << " Example 3: Using setters \n";
    Rectangle rect3;
    rect3.setWidth(3.5);
    rect3.setLength(12.4);
    display("rect3", rect3);

    // Example 4: Change the dimensions of a previously created rectangle
    cout << " Example 4: Changing dimensions  \n";
    cout << "rect2 before: " << rect2.getWidth() << " x " << rect2.getLength()
         << ", area = " << rect2.calculateArea() << "\n";
    rect2.setWidth(8.0);
    rect2.setLength(13.0);
    cout << "rect2 after:  " << rect2.getWidth() << " x " << rect2.getLength()
         << ", area = " << rect2.calculateArea() << "\n\n";

    // Example 5: Demonstrate how invalid dimensions are refused
    cout << " Example 5: Invalid input \n";
    if (!rect3.setWidth(-5.0)) {
        cout << "setWidth(-5.0) rejected; width is still "
             << rect3.getWidth() << "\n";
    }
    if (!rect3.setLength(0)) {
        cout << "setLength(0) rejected; length is still "
             << rect3.getLength() << "\n\n";
    }

    // Example 6: Represent a square by giving both sides the same value
    cout << " Example 6: Square (width = length)  \n";
    Rectangle square(9.0, 9.0);
    display("square", square);

    return 0;
}
