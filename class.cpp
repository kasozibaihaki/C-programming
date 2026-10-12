#include <iostream>
#include <iomanip> 
using namespace std;
class Rectangle {
private:
    double width;
    double length;

public:
    
    Rectangle() {
        width = 1.0;
        length = 1.0;
    }

    
    Rectangle(double w, double l) {
        setWidth(w);
        setLength(l);
    }


    void setWidth(double w) {
        if (w > 0) {
            width = w;
        } else {
            cout << "Invalid width! Setting to default value (1.0).\n";
            width = 1.0;
        }
    }

    // Setter for Length (with basic validation)
    void setLength(double l) {
        if (l > 0) {
            length = l;
        } else {
            std::cout << "Invalid length! Setting to default value (1.0).\n";
            length = 1.0;
        }
    }

    // Getter for Width
    double getWidth() const {
        return width;
    }

    // Getter for Length
    double getLength() const {
        return length;
    }

    // Function to calculate Area
    double calculateArea() const {
        return width * length;
    }

    // Function to calculate Perimeter
    double calculatePerimeter() const {
        return 2 * (width + length);
    }
};

int main() {
    // Fixed formatting for cleaner numeric display
    cout << std::fixed << std::setprecision(2);

    cout << "=== Example 1: Creating Default Rectangle ===\n";
    Rectangle rect1;
    cout << "Initial Width: " << rect1.getWidth() << "\n";
   cout << "Initial Length: " << rect1.getLength() << "\n";
    cout << "Area: " << rect1.calculateArea() << "\n";
    cout << "Perimeter: " << rect1.calculatePerimeter() << "\n\n";

    cout << "=== Example 2: Setting New Dimensions ===\n";
    rect1.setWidth(5.5);
    rect1.setLength(10.0);
    cout << "Updated Width: " << rect1.getWidth() << "\n";
    cout << "Updated Length: " << rect1.getLength() << "\n";
    cout << "New Area: " << rect1.calculateArea() << "\n";
    cout << "New Perimeter: " << rect1.calculatePerimeter() << "\n\n";

    cout << "=== Example 3: Creating Parameterized Rectangle ===\n";
    Rectangle rect2(3.5, 7.2);
    cout << "Rectangle 2 Width: " << rect2.getWidth() << "\n";
    cout << "Rectangle 2 Length: " << rect2.getLength() << "\n";
    cout << "Rectangle 2 Area: " << rect2.calculateArea() << "\n";
    cout << "Rectangle 2 Perimeter: " << rect2.calculatePerimeter() << "\n";

    return 0;
}