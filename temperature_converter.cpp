#include <iostream>
using namespace std;
//programme to conert the temperature of celsiues into farenhite using class concept

class Temperature{
    float celsiues;
    float farenhite;
    public:
    void inputTemperature(){
        cout<<"enter your temperature in celsiues:";
        cin>>celsiues;
    }
    float convertToFarenhite(){
        farenhite=(celsiues*9/5)+32;
    }
    void displayTemperature(){
        cout<<"the temperature in farenhite is:"<<farenhite;
    }
};

int main(){
    Temperature u1;
    u1.inputTemperature();
    u1.convertToFarenhite();
    u1.displayTemperature();
}