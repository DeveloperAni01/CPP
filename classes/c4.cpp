//Friend function
#include<bits/stdc++.h>

using namespace std;

class Student{
    private:
        string name;
        int roll;

    public:
        Student(string name, int roll) : name(name), roll(roll) {};

        friend bool compare(const Student &student1, const Student &student2);

        void display() const{
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
        }
};

bool compare(const Student &student1, const Student &student2){
    return student1.roll > student2.roll;
}

int main(){
    Student ani("Anirban", 10);
    Student adi("Aditya", 5);

    // ani.display();
    // adi.display();

    if (compare(ani, adi))
    {
        cout << "ani" << endl;
    } else
    {
        cout << "adi" << endl;
    }

    return 0;
}
