//making a bankaccount system using single level inheritance concept
#include <iostream>
using namespace std;
class Account{
    protected:
    string account_number;
    int balance;
    public:
    Account(string accnum,int bal){
        account_number=accnum;
        balance=bal;
    }
};
class SavingsAccount:public Account{
    int principle_rate;
    int result;
    public:
    SavingsAccount(string accnum,int bal,int principle):Account(accnum,bal){
        principle_rate=principle;
        result=(balance*100)/principle_rate*2;
    }
    display(){
        cout<<"account number:"<<account_number<<endl;
        cout<<"balance:"<<balance<<endl;
        cout<<"principle rate:"<<principle_rate<<endl;
    }
};
int main(){
    Account c1("25csu008",20000);
    SavingsAccount c2("25csu008",20000,10);
    c2.display();
}