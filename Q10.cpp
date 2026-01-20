#include <iostream>
using namespace std;
//programme for year or leap year
int main(){
    int year;
    cout<<"enter a year: ";
    cin>>year;
    if(year%4==0&&year%100!=0){
        cout<<"the year is a leap year";
    }
    else{
        cout<<"the year is not a leap year";
    }
    return 0;
}