#include <iostream>
using namespace std;
//printing the largest and the second largest number in an array
int main(){
    int i;
    int num[5];
    for(i=0;i<5;i++){
        cout<<"enter the number:";
        cin>>num[i];
    }
    int max=num[0];
    int scnmax=0;
    for(i=0;i<5;i++){
        if(max<num[i]){
            max=num[i];
        }
    }
    for(i=0;i<5;i++){
        if(max>num[i] && num[i]>scnmax){
            scnmax=num[i];
        }
    }
    cout<<"the largest number is:"<<max<<endl;
    cout<<"the second largest number is:\n"<<scnmax;
    return 0;
}