#include <iostream>
using namespace std;
//programme to print sum of an array,average and detect a key

void sum(int arr[]);
void avg(int arr[]);
void searchkey(int arr[],int key);

int main(){
    int i,key;
    int arr[5];
    for(i=0;i<5;i++){
        cout<<"enter your number:";
        cin>>arr[i];
    }
    cout<<"enter the key:";
        cin>>key;
        sum(arr);
        avg(arr);
        searchkey(arr,key);
}

void sum(int arr[]){
    int i,add=0;
    for(i=0;i<5;i++){
       add+=arr[i];
    }
    cout<<"the sum of the array:"<<add;
}

void avg(int arr[]){
int i,add=0,avg;
for(i=0;i<5;i++){
    add+=arr[i];
}
avg=add/5;
cout<<"the average is:"<<avg;
}

void searchkey(int arr[],int key){
    int i;
    for(i=0;i<5;i++){
        if(key==arr[i]){
        cout<<"the key is present!";
        break;
    }}
}