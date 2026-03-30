//writing a program to understand the concept of multilevel inheritance
#include <iostream>
using namespace std;
class Animal{
    public:
  void eat(){
    cout<<"method eat has been called!";
  }  
};
class Dog:public Animal{
    public:
    void bark(){
        cout<<"method bark has been called!";
    }
};
class Puppy:public Dog{
    public:
    void weep(){
        cout<<"method weep has been called!"<<endl;
        eat();cout<<endl;
        bark();
    }
};
int main(){
    Puppy c1;
    c1.weep();
}