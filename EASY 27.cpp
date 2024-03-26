#include <iostream>
using namespace std;

class Person {
public:
    void getData() {
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData() const { 
        cout << "Salary: " << salary << endl;
    }

protected:
    int salary;
};

int main() {
    Person person;
    person.getData();
    person.displayData(); 

    return 0;
}

