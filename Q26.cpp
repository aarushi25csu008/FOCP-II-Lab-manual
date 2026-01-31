#include <iostream>
using namespace std;
//writing a program ta take numbers in 5 subjects
int main(){
    int marks[5];
    int i,total=0,percentage;
    for(i=0;i<5;i++){
        cout<<"enter the subject marks:";
        cin>>marks[i];
        total+=marks[i];
        percentage=(total/50)*100;
    }
    cout<<"the total is:"<<total;
    cout<<"the percentage is:"<<percentage;
    return 0;
}