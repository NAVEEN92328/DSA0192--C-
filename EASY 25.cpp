#include <iostream>
using namespace std;

class A {
public:
    A(int aValue) : a(aValue) {}

    void displayA() const {
        cout << "Value of a: " << a << endl;
    }

protected:
    int a;
};

class B {
public:
    B(int bValue) : b(bValue) {}

    void displayB() const {
        cout << "Value of b: " << b << endl;
    }

protected:
    int b;
};

class C : public A, public B {
public:
    C(int aValue, int bValue, int cValue) : A(aValue), B(bValue), c(cValue) {}

    void displayC() const {
        cout << "Value of c: " << c << endl;
    }

private:
    int c;
};

int main() {

    int aValue = 100;
    int bValue = 200;
    int cValue = 300;

    C obj(aValue, bValue, cValue);

    obj.displayA();
    obj.displayB();
    obj.displayC();

    return 0;
}

