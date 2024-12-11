#include<iostream>
#include<vector>

using namespace std;

class Student{

    public:
        //data members or attributes
        string firstName;
        string lastName;
        int roll;
        vector<int> marks;

        //member functions

        void displayDetails() {
            cout << "Name: " << firstName + " " + lastName << endl;
            cout << "Roll No.: " << roll << endl;
            cout << "marks are  " << endl;
            for (int i : marks)
            {
                cout << i << " ";
            }
            cout << endl;
            cout << endl;
        }
};

int main(){
    Student studentOne;

    studentOne.firstName = "Anirban";
    studentOne.lastName = "Mondal";
    studentOne.roll = 2129045;
    studentOne.marks = {90, 91, 92, 89, 95, 97, 96};

    cout << "details of studentOne " << endl;
    studentOne.displayDetails();

    Student studentTwo;

    studentTwo.firstName = "Aditya";
    studentTwo.lastName = "Mondal";
    studentTwo.roll = 2129001;
    studentTwo.marks = {91, 96, 92, 99, 95, 97, 96};

    cout << "details of studentTwo " << endl;
    studentTwo.displayDetails();



    return 0;
}