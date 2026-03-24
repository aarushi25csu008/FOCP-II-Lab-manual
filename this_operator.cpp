#include <iostream>
using namespace std;
class A{
    int a1;
    int a2;
    public:
    A(){
        cout<<"Default"<<endl;
        a1=0;
        a2=0;
    }
    A(int a1,int a2){
        this->a1=a1,this->a2=a2;
    }
    display(){
        cout<<"a1:"<<a1<<endl;
        cout<<"a2:"<<a2<<endl;
    }
};
int main(){
    A obj1,obj2(20,45);
    obj1.display();
    obj2.display();
}