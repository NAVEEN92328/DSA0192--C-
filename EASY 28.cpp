#include <iostream>
using namespace std;

class Shape {
public:
    Shape() {} 

    Shape(int s) : side(s) {} 

    virtual double area() const = 0;

protected:
    int side;
};

class Rectangle : public Shape {
public:
    Rectangle(int l, int w) : length(l), width(w) {} 

    double area() const override {
        return length * width;
    }

protected:
    int length;
    int width;
};

class Cuboid : public Rectangle {
public:
    Cuboid(int l, int w, int h) : Rectangle(l, w), height(h) {} 

    double volume() const {
        return area() * height;
    }

private:
    int height;
};

int main() {
    int length, width, height;

    cout << "Enter length of cuboid: ";
    cin >> length;

    cout << "Enter width of cuboid: ";
    cin >> width;

    cout << "Enter height of cuboid: ";
    cin >> height;

    Cuboid cuboid(length, width, height);
    cout << "Area of cuboid: " << cuboid.area() << endl;
    cout << "Volume of cuboid: " << cuboid.volume() << endl;

    return 0;
}

