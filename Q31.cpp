#include <iostream>
using namespace std;
//counting the numbers that are divisible by 3 and 5
int main(){
    int i,count=0,count2=0;
    int num[5];
    for(i=0;i<5;i++){
        cout<<"enter your number:";
        cin>>num[i];
    }
    for(i=0;i<5;i++){
        if(num[i]%5==0){
            count++;
        }
        else if(num[i]%3==0){
            count2++;
        }
    }
    cout<<"the numbers divisible by 5 are:"<<count;
    cout<<"the number divisiblle by 3 are:"<<count2;
    return 0;
}