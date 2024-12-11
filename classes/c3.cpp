#include <bits/stdc++.h>

using namespace std;

class Student{
    private:
        string name;
        int roll;
        vector<int> nums;

    public:
        Student(){
            roll = 0;
            cout << "called!!" << endl;
        }

        Student(string name, int roll, vector<int> nums){
            this->name = name;
            this->roll = roll;
            this->nums = nums;
        }

        Student(string val) : Student(val, 1, {1,2,3}){}

        //getter
        string getName(){
            return name;
        }

        int getRoll(){
            return roll;
        }

        vector<int> getNums(){
            return nums;
        }

        //setter
        void setName(string val){
            //logic
            name = val;
        }

        void setRoll(int num){
            roll = num;
        }

        void setNums(vector<int> no){
            nums = no;
        }

        void displayDetails() {
            cout << "Name: " << name << endl;
            cout << "Roll No.: " << roll << endl;
            cout << "marks are  " << endl;
            for (int i : nums)
            {
                cout << i << " ";
            }
            cout << endl;
            cout << endl;
        }
};

int main(){
    Student student1;
    // student1.setName("Anirban Mondal");
    //  string name = student1.getName();
    //  cout << name << endl;
     // student1.setRoll(123);
     // student1.setNums({1,2,3,4,10,5,6});

    student1.displayDetails();

     return 0;
}