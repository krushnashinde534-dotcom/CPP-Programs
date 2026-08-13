#include <iostream>
using namespace std;

class Number {
public:
    int n;

    void calculate() {
        cout << "Square = " << n * n << endl;
        cout << "Cube = " << n * n * n << endl;
    }
};

int main() {
    Number obj;

    cout << "Enter a number: ";
    cin >> obj.n;

    obj.calculate();

    return 0;
}