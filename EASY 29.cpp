#include <iostream>
using namespace std;

class Number {
public:
    Number(int m, int n, int k) : start(m), end(n), skip(k) {} 

    virtual void printNumbers() const {
        for (int i = start; i <= end; i += skip) {
            cout << i << " ";
        }
        cout << endl;
    }

protected:
    int start;
    int end;
    int skip;
};
class Skipper : public Number {
public:
    Skipper(int m, int n, int k) : Number(m, n, k) {} 

    void printNumbers() const override {
        for (int i = start; i <= end; i += skip) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    int M = 50, N = 100, K = 7;

    Skipper skipper(M, N, K);
    skipper.printNumbers();

    return 0;
}

