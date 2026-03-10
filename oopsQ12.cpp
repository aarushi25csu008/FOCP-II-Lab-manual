#include <iostream>
using namespace std;
class Vehicle{
    int vehicnum;
    string ownername;
    string type;
    int fee;
    public:
    Vehicle();
    Vehicle(int,string);
    Vehicle(int,string,string,int);
    display();
};
Vehicle::Vehicle(){
    vehicnum=0;
    ownername="Unknown";
    type="Genral";
    fee=0;
}
Vehicle::Vehicle(int V,string name){
    vehicnum=V;
    ownername=name;
}
Vehicle::Vehicle(int V,string name,string kind,int price){
    vehicnum=V;
    ownername=name;
    type=kind;
    fee=price;
}
Vehicle::display(){
    cout<<"vehicle number:"<<vehicnum<<endl;
    cout<<"owner name:"<<ownername<<endl;
    cout<<"type car:"<<type<<endl;
    cout<<"price:"<<fee<<endl;
}
int main(){
    Vehicle m1(50,"aarushi");
    m1.display();
}