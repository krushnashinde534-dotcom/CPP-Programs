#include <iostream>
using namespace std;

class Student
{
public:
    double math;
    double science;
    double english;

    double total()
    {
        return math + science + english;
    }

    double average()
    {
        return total() / 3;
    }
};

int main()
{
    Student s;

    s.math = 80;
    s.science = 75;
    s.english = 85;

    cout << "Total = " << s.total() << endl;
    cout << "Average = " << s.average();

    return 0;
}