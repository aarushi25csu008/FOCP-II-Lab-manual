#include <iostream>
using namespace std;
//taking employees salary in an array and computing the total
int main(){
    int i;
    int total=0,avg;
    int salary[5];
    for(i=0;i<5;i++){
        cout<<"enter the salary of the employees:";
        cin>>salary[i];
        total+=salary[i];
        avg=total/5;
    }
    cout<<"the total salary is:"<<total;
    cout<<"the average is:"<<avg;
    return 0;
}