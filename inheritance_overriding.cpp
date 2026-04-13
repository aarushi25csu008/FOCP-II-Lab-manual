/*this code expolres the concept of overriding,overriding can only be done with inheritance 
and can never be done inside a class because then it will throw an ambiguity error 
overiding is basically having the same method both in the parent class and the child class */
#include <iostream>
using namespace std;
class Shape{
    public:
    Shape(){
        cout<<"Shapes default const called!"<<endl;
    }
    void area(){
        cout<<"no dim no area!"<<endl;
    }
    void display(){
        cout<<"we are 2d shapes!"<<endl;
    }
};
class Rectangle:public Shape{
    int length;
    int width;
    public:
    Rectangle(int l=5,int w=10):length(l),width(w){
        cout<<"Rectangle const called!"<<endl;
    }
    void area(){
        cout<<"area:"<<length*width<<endl;
    }
};
int main(){
    Shape s1;
    Rectangle s2;
    s1.Shape::area(); //this line tells the code which area to use
    s2.area();
}