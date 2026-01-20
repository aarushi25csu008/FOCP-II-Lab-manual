#include <iostream>
using namespace std;
int main(){
    int salary,bonus;
    cout<<"enter your  salary: ";
    cin>>salary;
    bonus=salary*12/100;
    cout<<"the bonus is: "<<bonus;
    cout<<"the net salary is: "<<bonus+salary;
    return 0;
}