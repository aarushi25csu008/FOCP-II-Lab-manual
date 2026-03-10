//using class concept to calculate the area of rectangle
#include <iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;
    int total;
    public:
    Rectangle(int,int);
    calculate();
    display();
};
Rectangle::Rectangle(int L,int B){
    length=L;
    breadth=B;
}
Rectangle::calculate(){
    total=length*breadth;
}
Rectangle::display(){
    cout<<"the length is:"<<length<<endl;
    cout<<"the breadth is:"<<breadth<<endl;
    cout<<"the area is:"<<total<<endl;
}
int main(){
    Rectangle m1(5,4);
    m1.calculate();
    m1.display();
}