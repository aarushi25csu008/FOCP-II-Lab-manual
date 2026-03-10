//programme to enter the details of the car and display it
#include <iostream>
using namespace std;
class Car{
    string brand;
    int price;
    public:
    Car(string,int);
    display();
};
Car::Car(string B,int P){
    brand=B;
    price=P;
}
Car::display(){
    cout<<"the brand of the car is:"<<brand<<endl;
    cout<<"the price of the car is:"<<price<<endl;
}
int main(){
    Car m1("maruti",40000);
    m1.display();
}