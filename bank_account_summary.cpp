#include <iostream>
using namespace std;
//writing a program for bank account system

class Bankaccount{
string accountHolderName;
int accountNumber;
double balance=1000;
int amount=0;
public:
void inputDetails(){
    cout<<"enter the account name:";
    cin>>accountHolderName;
    cout<<"enter the account number:";
    cin>>accountNumber;
    cout<<"your balance is:"<<balance<<endl;
}
void deposit(){
    cout<<"enter the amount:";
    cin>>amount;
    balance=balance+amount;
}
void withdraw(){
    cout<<"enter the amount:";
    cin>>amount;
    balance=balance-amount;
}
void display(){
    cout<<"your balance is:"<<balance<<endl;
    cout<<"your account name is:"<<accountHolderName<<endl;
    cout<<"your account number is:"<<accountNumber<<endl;
}
};

int main(){
    Bankaccount u1;
    u1.inputDetails();
    u1.deposit();
    u1.display();
}