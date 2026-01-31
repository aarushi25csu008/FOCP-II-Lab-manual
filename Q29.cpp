#include <iostream>
using namespace std;
//taking temperatures as input and displaying the lowest
int main(){
    int i;
    int temp[5];
    for(i=0;i<5;i++){
        cout<<"enter the temperature: ";
        cin>>temp[i];
    }
    int min=temp[0];
    for(i=0;i<5;i++){
       if(min>temp[i]){
        min=temp[i];
       } 
    }
    cout<<"the lowest temperature is:"<<min;
    return 0;
}