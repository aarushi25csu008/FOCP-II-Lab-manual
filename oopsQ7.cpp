#include <iostream>
using namespace std;
class Table{
    string material;
    int price;
    int legs;
    public:
    Table();
    Table(string,int);
    Table(string,int,int);
    display();
};
Table::Table(){
    material="wood";
    price=40;
    legs=4;
}
Table::Table(string M,int P){
    material=M;
    price=P;
}
Table::Table(string M,int P,int L){
    material=M;
    price=P;
    legs=L;
}
Table::display(){
    cout<<"material:"<<material<<endl;
    cout<<"price"<<price<<endl;
    cout<<"legs"<<legs<<endl;
}
int main(){
    Table m1("glass",40000,4);
    m1.display();
}