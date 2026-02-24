#include <iostream>
using namespace std;
//programme to store employee data

class Employee{
    int empId;
    string name;
    double monthlySalary=1000;
    double AnnualSalary=0;
    public:
    void inputDetails(){
        cout<<"enter your employee ID:";
        cin>>empId;
        cout<<"enter your name:";
        cin>>name;
    }
    void calculateAnnualSalary(){
     AnnualSalary=monthlySalary*12;
    }
    void display(){
        cout<<empId;
        cout<<name;
        cout<<AnnualSalary;
    }
};

int main(){
    Employee u1;
    u1.inputDetails();
    u1.calculateAnnualSalary();
    u1.display();
}