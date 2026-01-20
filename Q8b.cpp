#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    if(num%3==0){
        cout<<"Buzz";
    }
     if(num%5==0){
        cout<<"Fuzz";
    }
    if(num%3&&num%5){
        cout<<"BuzzFuzz";
    }
    return 0;
}