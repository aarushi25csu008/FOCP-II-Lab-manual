#include <iostream>
using namespace std;
//this prgramme declares max using function

void maxmin(int num[5]);

int main(){
    int i;
int num[5];
for(i=0;i<5;i++){
    cout<<"enter the numbers";
    cin>>num[i];
}
maxmin(num);
}

void maxmin(int num[5]){
    int max,i;
    max=num[0];
    for(i=1;i<5;i++){
      if(num[i]>max){
        max=num[i];
      }
    }
    cout<<"the max number is"<<max;
}
