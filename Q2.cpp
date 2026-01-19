#include <iostream>
using namespace std;
// inputing marks and calculating their average
int main(){
    int marks1,marks2,marks3;
    cout<<"enter first subject marks: ";
    cin>>marks1;
    cout<<"enter second subject marks: ";
    cin>>marks2;
    cout<<"enter third subject marks: ";
    cin>>marks3;
    cout<<(marks1+marks2+marks3)/3;
    return 0;
}