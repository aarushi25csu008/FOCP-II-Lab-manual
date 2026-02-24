#include <iostream>
using namespace std;

class Student
{
    int Rollno;
    string name;
    int marks1;
    int marks2;
    int marks3;
    public :
    void inputDetails(){
        cout<<"\n enter Rollno,name,marks1,marks2 & marks3";
        cin>>Rollno>>name>>marks1>>marks2>>marks3;
    }
    int calculateTotal(){
        cout<<"\n the total marks is:"<<marks1+marks2+marks3;
    }
    void displayDetails(){
        cout<<"\n name:"<<name<<"\n Rollno:"<<Rollno;
        cout<<"\n marks1:"<<marks1<<"\n marks2:"<<marks2<<"\n marks3:"<<marks3;
    }
};

int main(){
    Student s1;
    s1.inputDetails();
    s1.displayDetails();
    s1.calculateTotal();
    return 0;
}