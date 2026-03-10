//program to calculate the electricity bill using class concept
#include <iostream>
using namespace std;
class ElectricityBill{
    int unit;
    int total;
    int rate;
    int fixed_charge=1;
    public:
    calculateBill(int);
    calculateBill(int,int);
    calculateBill(int,int,int);
    display();
};
ElectricityBill::calculateBill(int a){
    unit=a;
}
ElectricityBill::calculateBill(int a,int b){
    unit=a;
    rate=b;
    total=a*b;
}
ElectricityBill::calculateBill(int a,int b,int c){
    unit=a;
    rate=b;
    fixed_charge=c;
    total=a*b*c;
}
ElectricityBill::display(){
    cout<<"unit:"<<unit<<endl;
    cout<<"rate:"<<rate<<endl;
    cout<<" fixed charge:"<<fixed_charge<<endl;
    cout<<"the charge is:"<<total<<endl;
}
int main(){
    ElectricityBill m1;
m1.calculateBill(2,20);
m1.display();
}