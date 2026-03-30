//using multilevel inheritance to print all the functionality of several devices
#include <iostream>
using namespace std;
class Device{
    public:
    PowerOn(){
        cout<<"the power is On!";
    }
};
class Computer:public Device{
    public:
    process(){
        cout<<"the function process has been called!";
    }
};
class Laptop:public Computer{
    public:
    carry(){
        PowerOn();cout<<endl;
        process();cout<<endl;
        cout<<"function carry has been called!";
    }
};
int main(){
    Laptop c1;
    c1.carry();
}