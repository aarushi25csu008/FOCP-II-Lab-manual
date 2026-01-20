#include <iostream>
using namespace std;
int main(){
    int amount,dicount;
    cout<<"enter the amount: ";
    cin>>amount;
    if(amount>1000){
       dicount=amount*10/100;
       cout<<"the dicount is: "<<dicount; 
    }
    return 0;
}