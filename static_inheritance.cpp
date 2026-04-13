//We used static so that
//the variable count is shared by all objects of the class 
#include <iostream>
using namespace std;
class Box{
    protected:
    int length;
    int breadth;
    int a;
    static int count;
    public:
    Box(int l=0,int b=0){
        length=l;
        breadth=b;
    }
    void area(){
        a=length*breadth;
        count++;
    }
    void display(){
        cout<<"length:"<<length<<endl;
        cout<<"breadth:"<<breadth<<endl;
        cout<<"area:"<<a<<endl;
        cout<<"count:"<<count<<endl;
    }
};
int Box::count;
int main(){
Box c1(4,5);
c1.area();
c1.display();
Box c2(3,5);
c2.area();
c2.display();
}