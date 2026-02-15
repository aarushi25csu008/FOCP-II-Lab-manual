#include <iostream>
using namespace std;
//programe to understand the logic of call by refrence and call by value

void swapByValue(int,int);
void swapByReference(int &a,int &b);

int main(){
    int a=5,b=10;
    swapByValue(a,b);{
        cout<<"the value of a call by value in main"<<a<<endl;
        cout<<"the value of b call by value in main"<<b<<endl;
    }
    swapByReference(a,b);{
        cout<<"the value of a call by reference in main"<<a<<endl;
        cout<<"the value of b call by reference in main"<<b<<endl;
    }
}

void swapByValue(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"value of call by value a in function"<<a<<endl;
    cout<<"value of call by value b in function"<<b<<endl;
}

void swapByReference(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"the value of a call by refrence in function"<<a<<endl;
    cout<<"the value of b call by refrence in function"<<b<<endl;
}