/*This code is a classic example used to 
understand Inheritance + Virtual Function + Runtime Polymorphism in C++.*/
/*usually if we hadnt used the concept of virtual and pointer the code would have priortised the
parent class and would have displayed the area of parent class*/
#include <iostream>
using namespace std;
class Shape{
    public:
    Shape(){
        cout<<"default const for shapes is called!"<<endl;
    }
    virtual void area(){
        cout<<"no dim no area!"<<endl;
    }
    virtual void display(){
        cout<<"we are 2d shapes!"<<endl;
    }
};
class Rectangle:public Shape{
    public:
    int length;
    int width;
    Rectangle(int l=10,int w=5):length(l),width(w){
        cout<<"default const of rectangle is called!"<<endl;
    }
    void area(){
        cout<<"area:"<<length*width<<endl;
    }
};
int main(){
    Shape* s1;
    Rectangle s2;
    s1=&s2;  /*this line tells the parent to priorities the 
    child class and give output of child area*/
     s1->area();    
}