#include <iostream>
using namespace std;
//function to calculate the area of circle,rectangle and triangle

void area(double radius);
void area(double length,double breadth);
void areaTriangle(double base,double height);

int main(){
    double radius,length,breadth,base,height;
    int choice;
    cout<<"1-circle"<<endl<<"2-rectangle"<<endl<<"3-tringle"<<endl;
    cout<<"enter your choice:";
    cin>>choice;
    switch(choice){
    case 1:{
        cout<<"enter your radius:";
        cin>>radius;
        area( radius);
        break;
    }
    case 2:{
        cout<<"enter your length:";
        cin>>length;
        cout<<"enter your beadth:";
        cin>>breadth;
        area( length,breadth);
        break;
    }
    case 3:{
        cout<<"enter the base:";
        cin>>base;
        cout<<"enter the height:";
        cin>>height;
        areaTriangle( base,height);
        break;
    }
}
}

void area(double radius){
    double ans;
    ans=radius*radius*3.14;
    cout<<"the area of the circle is:"<<ans;
}

void area(double length,double breadth){
    double ans;
    ans=length*breadth;
    cout<<"the area of the rectangle is:"<<ans;
}

void areaTriangle(double base,double height){
    double ans;
    ans=base*height*0.5;
    cout<<"the area of rectangle is:"<<ans;
}
