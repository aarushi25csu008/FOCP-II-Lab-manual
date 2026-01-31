#include <iostream>
using namespace std;
//taking 5 numbers in an array and suming the even and odd seperately
int main(){
    int i,m,n;
    int num[5];
    int odd=0,even=0;
    for(i=0;i<5;i++){
        cout<<"enter your number:";
        cin>>num[i];
    }
    for(i=0;i<5;i++){
        if(num[i]%2==0){
            even+=num[i];
        }
        else{
            odd+=num[i];
        }
    }
    cout<<"the sum of even numbers are:"<<even;
    cout<<"the sum of odd numbers are"<<odd;
    return 0;
}