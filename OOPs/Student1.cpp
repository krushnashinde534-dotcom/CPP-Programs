# include <iostream>
using namespace std;
#define MAX 10
class student
{
    private:
    char name[30];
    int rollNo;
    int total;
    float percentage;
    public:
    void getDetails(void);
    void putDetails(void);
};
void student::getDetails(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks: ";
    cin >> total;
    percentage = (total / 500.0) * 100;
}
void student::putDetails(void)
{
    cout<<"Student Details:\n";
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollNo << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
}
int main () {
    student std[MAX];
    int n, loop;
    cout << "Enter total number of students: ";
    cin >> n;
    for(loop = 0; loop < n; loop++)
    {
        cout << "\nEnter details of student " << loop + 1 << ":\n";
        std[loop].getDetails();
    }
    cout<<endl;
    for(loop = 0; loop < n; loop++)
    {
        cout << "\nDetails of student " << loop + 1 << ":\n";
        std[loop].putDetails();
    }
    return 0;
}