#include <iostream>
using namespace std;

class A
{
public:
    void showA()
    {
        cout << "I am Parent A" << endl;
    }
};

class B : public A
{
public:
    void showB()
    {
        cout << "I am Child B" << endl;
    }
};

int main()
{
    B obj;

    obj.showA();
    obj.showB();

    return 0;
}