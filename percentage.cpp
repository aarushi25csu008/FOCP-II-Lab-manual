#include <iostream>
using namespace std;
// program to find the total and percentage of the marks
int main(){
    int marks1,marks2,marks3;
    cout<<"enter the marks of first subject:";
    cin>>marks1;
    cout<<"enter the marks of second subject";
    cin>>marks2;
    cout<<"enter the marks of third subject";
    cin>>marks3;
    cout<<"the total is"<<(marks1+marks2+marks3);
    cout<<"the percentage is"<<(marks1+marks2+marks3/150)*100;
    return 0;
}