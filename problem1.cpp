#include <iostream>
using namespace std;

void IsPrime(int);

int main(){
 IsPrime(5);
}

void IsPrime(int x){
    bool correct=true;
    int n=2;
    while(n<x){
    if(x%n==0){
       correct=false;
       break;
    }
    n++;
}
    if(correct){
        cout<<"the number is prime";
    }
    else{
        cout<<"the number is not prime";
    }
}