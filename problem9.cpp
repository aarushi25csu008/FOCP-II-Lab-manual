#include <iostream>
using namespace std;
//calculating the power using function

void power(int,int);

int main(){
    int base,exponent;
    cout<<"enter the base:";
    cin>>base;
    cout<<"enter the power:";
    cin>>exponent;
    power(base,exponent);
}

void power(int base,int exponent){
    int i,mul=1;
    for(i=0;i<exponent;i++){
     mul=mul*base;
    }
    cout<<"the result is:"<<mul;
}