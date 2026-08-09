#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Square = " << square(n) << endl;
    return 0;
}