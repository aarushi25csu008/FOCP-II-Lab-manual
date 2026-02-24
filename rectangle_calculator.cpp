#include <iostream>
using namespace std;
// programme to calculate the perimeter and area using class concept

class Rectangle{
    float length;
    float width;

    public:
    void inputDimensions(){
        cout<<"enter the length:";
        cin>>length;
        cout<<"enter the width:";
        cin>>width;
    }
    float calculateArea(){
        cout<<"the area of the rectangle is:"<<(length*width);
    }
    float calculatePerimeter(){
        cout<<"the perimeter of the rectangle is:"<<2*length*width;
    }
};

int main(){
    Rectangle u1;
    u1.inputDimensions();
    u1.calculateArea();
    u1.calculatePerimeter();
}