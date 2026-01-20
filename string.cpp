#include <iostream>
using namespace std;
int main(){
    int a;
    string name;cout<<"\n enter a &name: ";
    cin>>a;
    cin.ignore();
    getline(cin,name);
    cout<<"\n a="<<a<<"\n name= "<<name;
    return 0;
}