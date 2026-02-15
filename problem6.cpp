#include <iostream>
using namespace std;
//function programme to create a simple calculator

void calc(int,int,int);

int main(){
    int choice;
    cout<<"1 - additon"<<"2 - subtraction"<<"3 - multiplication"<<"4 - division";
    cout<<"enter you choice:";
    cin>>choice;
    int num1,num2;
    cout<<"enter your first number:";
    cin>>num1;
    cout<<"enter the second number:";
    cin>>num2;
    calc(choice,num1,num2);
}

void calc(int choice,int num1,int num2){
    int ans;
    switch(choice){
        case 1:
        ans=num1+num2;
        break;
        case 2:
        ans=num1-num2;
        break;
        case 3:
        ans=num1*num2;
        break;
        case 4:
        ans=num1/num2;
        break;
    }
    cout<<"the answer is:"<<ans;
}