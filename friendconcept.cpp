/*A friend function is a non-member function that is allowed to
access the private and protected data of a class.
It is not part of the class, but it has special permission to access its private data.*/
#include <iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;
    public:
    Rectangle(){
        length=0;
        breadth=0;
    }
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    display(){
        cout<<"length:"<<length<<endl;
        cout<<"breadth:"<<breadth<<endl;
    }
    void friend area(Rectangle obj);
};
void  area(Rectangle obj){
    int area=obj.length*obj.breadth;
    cout<<"area:"<<area<<endl;
}
int main(){
    Rectangle r1,r2(5,4);
    r1.display();
    area(r1);
    r2.display();
    area(r2);
}