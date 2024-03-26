#include <iostream>
using namespace std;

class Rectangle {
public:
    Rectangle() {} 

    Rectangle(double l, double w) : length(l), width(w) {} 

    double calculateArea() const {
        return length * width;
    }

private:
    double length;
    double width;
};

int main() {
    const int size = 3;
    Rectangle rectangles[size];

    rectangles[0] = Rectangle(5, 10);
    rectangles[1] = Rectangle(7, 3);
    rectangles[2] = Rectangle(8, 6);

    for (int i = 0; i < size; i++) {
        double area = rectangles[i].calculateArea();
        cout << "Area of rectangle " << (i + 1) << ": " << area << endl;
    }

    return 0;
}


