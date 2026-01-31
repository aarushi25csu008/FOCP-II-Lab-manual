#include <iostream>
using namespace std;
//pragramme to valdiate the password according to the usage of special charachters
int main(){
    string password;
    cout<<"enter your password:";
    cin>>password;
    int i;
    bool correct=true;
    for(i=0;i<password.length();i++){
        if(password[i]=='@'||password[i]=='#'||password[i]=='%'){
            correct=false;
            break;
        }
    }
    if(correct){
        cout<<"your password is valid";
    }
    else{
        cout<<"your password is invalid";
    }
    return 0;
}