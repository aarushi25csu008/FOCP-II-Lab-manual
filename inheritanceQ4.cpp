//using multiple inheritance concept to display name and department
#include <iostream>
using namespace std;
class Employee {
    protected:
    string name;
    public:
    Employee(string n){
        name=n;
    }
};
class Department{
    protected:
    string dept_name;
    public:
    Department(string dn){
        dept_name=dn;
    }
};
class Manager:public Employee,public Department{
    public:
    Manager(string n,string dn):Employee(n),Department(dn){
        cout<<"employee name:"<<name<<endl;
        cout<<"department name:"<<dept_name<<endl;
    }
};
int main(){
    Employee c1("aarushi chaubey");
    Department c2("AIML");
    Manager c3("aarushi chaubey","AIML");
}