#include <iostream>
using namespace std;
//creaatting a password verification system
int main(){
    int i,j;
    string password;
    bool correct=false;
    
    cout<<"enter your password";
    cin>>password;

for(i=0;i<password.length();i++){
    if(password[i]>='A' && password[i]<='Z'){
        correct=true;
        break;
    }
    if(password[i]>='a' && password[i]<='z'){
        correct=true;
        break;
    }
     if(password[i]>='0' && password[i]<='9'){
        correct=true;
        break;
     }
     if(password[i]=='@'||password[i]=='#'||password[i]=='%'||password[i]=='!'||password[i]=='&'){
        correct=true;
        break;
     }
}
if(correct){
    cout<<"the password is valid";
}
else{
    cout<<"the password is invalid";
}
return 0;
}