//implementing the concept of virtual and solving the diamond problem
/*diamond problem is basically when a class inherits from two class and those class further 
have inherited  from one single class. we are aware that whenver a child class is called first 
it parent class are called hance in this situation we our compiler got confused because two child
were pointing to the same parent class which parent class does the compiler has to call
hence the parent class is made virtual*/
#include <iostream>
using namespace std;

class Person{
protected:
    string name;
public:
    Person(string n){
        name=n;
    }
    void displayPerson(){
        cout<<"displaying Person!"<<endl;
        cout<<"name:"<<name<<endl;
    }
};

class Student: virtual public Person{ //virtual given to child class 
protected:
    string rollno;
public:
    Student(string n,string r):Person(n){
        rollno=r;
    }
    void displayStudent(){
        cout<<"displaying Student!"<<endl;
        displayPerson();
        cout<<endl;
        cout<<"roll no.:"<<rollno<<endl;
    }
};

class SportsPlayer: virtual public Person{
protected:
    string sportsname;
public:
    SportsPlayer(string n,string sn):Person(n){
        sportsname=sn;
    }
    void displaySportsPlayer(){
        cout<<"displaying sports!"<<endl;
        displayPerson();
        cout<<"sports name:"<<sportsname<<endl;
    }
};

class CollegeStudent:public Student,public SportsPlayer{
public:
    CollegeStudent(string n,string r,string sn)
    : Person(n), Student(n,r), SportsPlayer(n,sn)
    {
    }
    void displayCollegeStudent(){
        cout<<"displaying College student!"<<endl;
        displayStudent();
        displaySportsPlayer();
    }
};

int main(){
    CollegeStudent c1("aarushi","25csu008","badminton");
    c1.displayCollegeStudent();
}