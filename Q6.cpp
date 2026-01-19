#include <iostream>
using namespace std;
//calculating the simple intrest using given information
int main(){
    int principle,time;
    float rate;
    cout<<"enter the principle: ";
    cin>>principle;
    cout<<"enter the rate: ";
    cin>>rate;
    cout<<"enter the time: ";
    cin>>time;
    cout<<"the simple intrest is: "<<(principle*rate*time)/100;
    return 0;
}