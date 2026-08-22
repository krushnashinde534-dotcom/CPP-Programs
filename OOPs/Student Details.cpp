
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    float marks;

    void input()
    {
        cout << "\nEnter Roll Number: ";
        cin >> rollNo;

        cin.ignore();
        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nRoll No : " << rollNo;
        cout << "\nName    : " << name;
        cout << "\nMarks   : " << marks;

        if (marks >= 75)
            cout << "\nGrade   : A";
        else if (marks >= 60)
            cout << "\nGrade   : B";
        else if (marks >= 50)
            cout << "\nGrade   : C";
        else if (marks >= 35)
            cout << "\nGrade   : D";
        else
            cout << "\nResult  : FAIL";

        cout << "\n-------------------------";
    }
};

int main()
{
    Student s[100];
    int count = 0;
    int choice, roll, found;

    do
    {
        cout << "\n\n===== STUDENT MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display All Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";

        cout << "\n\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s[count].input();
            count++;
            cout << "\nStudent Added Successfully!";
            break;

        case 2:
            if (count == 0)
            {
                cout << "\nNo Student Records Found!";
            }
            else
            {
                for (int i = 0; i < count; i++)
                {
                    s[i].display();
                }
            }
            break;

        case 3:
            cout << "\nEnter Roll Number to Search: ";
            cin >> roll;

            found = 0;

            for (int i = 0; i < count; i++)
            {
                if (s[i].rollNo == roll)
                {
                    s[i].display();
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "\nStudent Not Found!";

            break;

        case 4:
            cout << "\nEnter Roll Number to Update: ";
            cin >> roll;

            found = 0;

            for (int i = 0; i < count; i++)
            {
                if (s[i].rollNo == roll)
                {
                    cout << "\nEnter New Details:";
                    s[i].input();
                    found = 1;

                    cout << "\nStudent Updated Successfully!";
                    break;
                }
            }

            if (!found)
                cout << "\nStudent Not Found!";

            break;

        case 5:
            cout << "\nEnter Roll Number to Delete: ";
            cin >> roll;

            found = 0;

            for (int i = 0; i < count; i++)
            {
                if (s[i].rollNo == roll)
                {
                    for (int j = i; j < count - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }

                    count--;
                    found = 1;

                    cout << "\nStudent Deleted Successfully!";
                    break;
                }
            }

            if (!found)
                cout << "\nStudent Not Found!";

            break;

        case 6:
            cout << "\nThank You!";
            break;

        default:
            cout << "\nInvalid Choice!";
        }

    } while (choice != 6);

    return 0;
}