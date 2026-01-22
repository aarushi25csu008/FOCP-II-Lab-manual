#include <iostream>
using namespace std;
int main(){
    int i,n;
    for(i=0;i<=5;i++){
        for(n=0;n<=5;n++){
            if(i==1||i==5||n==0||n==6){
            cout<<"*";}
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}