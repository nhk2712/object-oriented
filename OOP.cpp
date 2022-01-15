#include <iostream>
#include <string>
using namespace std;

    class Student
    {
        public:
        string name;
        int date;
        string month;
        int year;
        int height;
        string job;
        string place;

        void display()
        {
            cout << "Name: " << name << endl;
            cout << "D.O.B.: " << month << " " << date << ", " << year << endl;
            cout << "Height: " << height << " cm" << endl;
            cout << "Occupation: " << job << endl;
            cout << "Hometown: " << place << endl;
        }

        void setInfo()
        {
            cout << "Name? "; getline(cin, name);
            cout << "D.O.B.? "; cin >> month; cin >> date; cin >> year;
            cout << "Height? "; cin >> height;
            cout << "Occupation? "; getline(cin,job); getline(cin,job);
            cout << "Hometown? "; getline(cin, place);
        }
    };


int main()
{
    Student s1;
    s1.setInfo();
    s1.display();
    return 0;
}