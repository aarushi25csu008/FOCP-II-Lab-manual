#include <iostream>
#include <cmath>
using namespace std;
//function programme to calculate the emi

void emi(double,double,double);

int main(){
    double P,r,n;
    cout<<"enter the principal value:";
    cin>>P;
    cout<<"enter the rate of intrest:";
    cin>>r;
    cout<<"enter the time period:";
    cin>>n;

    emi(P,r,n);

}

void emi(double P,double r,double n){
    double calc;
    double R=r/(12*100);
    double N=n*12;
    calc=(P*R*pow(1+R,N))/(pow(1+R,N)-1);
    cout<<"the emi is:"<<calc;

}