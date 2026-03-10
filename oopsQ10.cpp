//program to calculate the shopping list
#include <iostream>
using namespace std;
class Product{
    string product_name;
    int price;
    int total;
    int quantity;
    public:
    Product(int,int);
    calculate();
    display();
    ~Product(){

    };
};
Product::Product(int P,int Q){
    price=P;
    quantity=Q;
}
Product::calculate(){
    total=price*quantity;   
}
Product::display(){
    cout<<"price:"<<price<<endl;
    cout<<"quantity:"<<quantity<<endl;
    cout<<"total"<<total<<endl;
}
int main(){
    Product m1(40,2);
    m1.calculate();
    m1.display();
}