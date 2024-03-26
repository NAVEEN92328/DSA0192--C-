#include <iostream>
using namespace std;

class RightAngleTriangle {
public:
    RightAngleTriangle() {} 

    RightAngleTriangle(int size) : triangleSize(size) {}

    RightAngleTriangle(int size, int num) : triangleSize(size), repeatNumber(num) {}

    void printTriangle() {
        for (int i = 1; i <= triangleSize; i++) {
            for (int j = 1; j <= i; j++) {
                cout << repeatNumber << " ";
            }
            cout << endl;
        }
    }

private:
    int triangleSize = 5; 
    int repeatNumber = 1; 
};

int main() {
    RightAngleTriangle triangle1; 
    cout << "Default pattern:" << endl;
    triangle1.printTriangle();

    cout << "\nPattern with size 4:" << endl;
    RightAngleTriangle triangle2(4); 
    triangle2.printTriangle();

    cout << "\nPattern with size 3 and repeating number 3:" << endl;
    RightAngleTriangle triangle3(3, 3); 
    triangle3.printTriangle();

    return 0;
}

