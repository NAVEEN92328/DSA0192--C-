#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class BinaryToOctalConverter {
public:
    BinaryToOctalConverter() {} 
    BinaryToOctalConverter(const string& binary) : binaryNumber(binary) {}

    string convertToOctal() {
        
        int decimalNumber = binaryToDecimal(binaryNumber);

       
        string octal = decimalToOctal(decimalNumber);

        return octal;
    }

private:
    string binaryNumber;

    int binaryToDecimal(const string& binary) {
        int decimalNumber = 0;
        for (size_t i = 0; i < binary.length(); i++) {
            decimalNumber = decimalNumber * 2 + (binary[i] - '0');
        }
        return decimalNumber;
    }

    string decimalToOctal(int decimal) {
        stringstream ss;
        ss << oct << decimal;
        return ss.str();
    }
};

int main() {
    string binary;

    cout << "Enter a binary number: ";
    cin >> binary;

    BinaryToOctalConverter converter(binary); 
    string octalNumber = converter.convertToOctal();

    cout << "Octal equivalent: " << octalNumber << endl;

    return 0;
}

