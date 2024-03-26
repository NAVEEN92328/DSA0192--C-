#include <iostream>
using namespace std;

class A {
public:
    A(int xValue) : x(xValue) {}

protected:
    int x;
};
class B : private A {
public:
    B(int xValue) : A(xValue) {}

    void displayX() {
        cout << "Value of x: " << x << endl; 
    }
};

int main() {

    int xValue = 10;

    B obj(xValue);
    obj.displayX();

    return 0;
}

