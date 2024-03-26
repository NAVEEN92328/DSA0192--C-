#include <iostream>
using namespace std;

class Example {
public:
    Example(int x) {
        this->x = x; 
    }

    void display() {
        cout << "Value of x using this pointer: " << this->x << endl;
    }

private:
    int x;
};

int main() {
    int x_input = 20; 
    Example obj(x_input); 
    obj.display(); 

    return 0;
}

