//programe for displaying account details
#include <iostream>
using namespace std;
class Bankaccount{
    int accountnumber;
    int balance;
    public:
    Bankaccount(int,int);
    display();
};
Bankaccount::Bankaccount(int acnum,int bal){
    accountnumber=acnum;
    balance=bal;
}
Bankaccount::display(){
    cout<<"the account number is:"<<accountnumber<<endl;
    cout<<"the balance is:"<<balance<<endl;
}
int main(){
    Bankaccount m1(1304,40000);
    m1.display();
}