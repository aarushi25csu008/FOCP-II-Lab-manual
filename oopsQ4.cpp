//programme to display employee information using class
#include <iostream>
using namespace std;
class Employee{
    string emp_Id;
    int salary;
    public:
    Employee(string,int);
    display();
};
Employee::Employee(string Id,int S){
    emp_Id=Id;
    salary=S;
}
Employee::display(){
    cout<<"the Id of the employee is:"<<emp_Id<<endl;
    cout<<"the salary is:"<<salary<<endl;
}
int main(){
    Employee m1("aarushi25csu008",40000);
    m1.display();
}