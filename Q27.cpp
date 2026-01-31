#include <iostream>
using namespace std;
//finding out the biggest number in an array of 10 numbers
int main(){
    int price[10];
    int max,i;
    for(i=0;i<10;i++){
        cout<<"enter the price:";
        cin>>price[i];
    }
     max=price[0];
    for(i=0;i<10;i++){
        if(max<price[i]){
            max=price[i];
        }
    }
    cout<<"the maximum price is:"<<max;
    return 0;
}