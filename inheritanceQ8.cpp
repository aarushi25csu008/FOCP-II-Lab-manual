//using Hirerachal inheritance to display name and salary
#include <iostream>
using namespace std;
class Employee{
    protected:
    string name;
    int salary;
    public:
    Employee(string n,int s){
        name=n;
        salary=s;
    }
    displaydetails(){
        cout<<"name:"<<name;
        cout<<"salary:"<<salary;
    }
};
class Designer:public Employee{
    public:
    Designer(string n,int s):Employee(n,s){

    }
    displayDesigner(){
        cout<<"name:"<<name<<endl;
        cout<<"salary:"<<salary<<endl;
    }
};
class Devloper:public Employee{
    public:
    Devloper(string n,int s):Employee(n,s){

    }
    displayDevloper(){
       cout<<"name:"<<name<<endl;
       cout<<"salary:"<<salary<<endl;
    }
};
int main(){
    Designer c1 ("aarushi",20000);
    Devloper c2("aarushi",20000);
    c2.displayDevloper();
    c1.displayDesigner();
}