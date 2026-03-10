//programme to enter the details of a student and display
#include <iostream>
using namespace std;
class Student{
    string name;
    int marks;
    public:
    initialize(string,int);
    display();
};
Student:: initialize(string n,int m){
    name=n;
    marks=m;
}
Student::display(){
    cout<<"the name is:"<<name<<endl;
    cout<<"the marks is:"<<marks<<endl;
}
int main(){
    Student m1;
    m1.initialize("aarushi chaubey",78);
    m1.display();
}
