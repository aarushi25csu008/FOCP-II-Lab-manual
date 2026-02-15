#include <iostream>
using namespace std;

int count=0;
void callcounter(){
    count++;
    cout<<"the number of times this function is called:"<<count<<endl;
}

int main(){
    callcounter();
    callcounter();
    callcounter();

    
}