//understanding the usage of hierarchal inheritance
#include <iostream>
using namespace std;
class Shape{
    public:
    draw(){
        cout<<"the function draw has been called!"<<endl;
    }
};
class Circle:public Shape{
    public:
    area1(){
        draw();
        cout<<"the function area(circle)!"<<endl;
    }
};
class Rectangle:public Shape{
    public:
    area2(){
        draw();
        cout<<"the function area(rectangle)!"<<endl;
    }
};
int main(){
    Circle u1;
    u1.area1();
    Rectangle u2;
    u2.area2();
}