#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string* firstName;
    string lastName;
    int* rollNo;

    Student(string Fname, string Lname, int roll)
    {
        firstName = new string(Fname);
        lastName = Lname;
        rollNo = new int(roll);
        cout << "Constructor Called !!" << endl;
    }

    Student(const Student &other){
        firstName = new string(*other.firstName);
        lastName = other.lastName;
        rollNo = new int(*other.rollNo);
        cout << "copy cons called!!" << endl;
    }

    ~Student(){
        delete firstName;
        cout << "Destructor Called !!" << endl;
    }

    void viewDetails()
    {
        cout << "Full Name: " << *firstName + " " + lastName << endl;
        cout << "Roll No. " << *rollNo << endl;
    }

    
};

int main()
{
    Student student1("Anirban", "Mondal", 2129045);

    // student1.firstName = "Anirban";
    // student1.lastName = "Mondal";
    // student1.rollNo = 2129045;

    //student1.viewDetails();
    Student copy = student1;
    //copy.viewDetails();

    *student1.firstName = "Aditya";
    

    cout << "student1 -------------" << endl;
    student1.viewDetails();
    cout << "copied -------------" << endl;
    copy.viewDetails();

    return 0;
}