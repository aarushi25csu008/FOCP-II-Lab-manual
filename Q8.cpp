#include <iostream>
using namespace std;
//to input quantity and price and calculate the discount
int main(){
    int quantity,price;
    cout<<"enter the quantity: ";
    cin>>quantity;
    cout<<"enter the price: ";
    cin>>price;
    int total=quantity*price;
    cout<<"the amount after the discount is: "<<(total-(total*20)/100);
    return 0;
}