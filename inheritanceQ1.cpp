//displaying student information using single level inheritance
#include <iostream>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    public:
    Person(){
        name="aarushi";
        age=18;
    }
};
class Student:public Person{
    string rollno;
    public:
    Student(){
        rollno="25csu008";
    }
    display_student(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"roll no:"<<rollno<<endl;
    }
};
int main(){
    Person c1;
    Student c2;
    c2.display_student();
}