#include <iostream>
using namespace std;

class Number
{
public:
    int a;
    int b;

    int largest()
    {
        if (a > b)
            return a;
        else
            return b;
    }
};

int main()
{
    Number n;

    n.a = 25;
    n.b = 40;

    cout << "Largest = " << n.largest();

    return 0;
}