#include <iostream>
using namespace std;
//clasying triangles into equilateral,scalene and isociales
int main(){
    int side1,side2,side3;
    cout<<"enter the first side: ";
    cin>>side1;
    cout<<"enter the second side: ";
    cin>>side2;
    cout<<"enter the third side: ";
    cin>>side3;
    if(side1==side2&&side2==side3&&side3==side1){
        cout<<"the triangle is an equilateral teinagle";
    }
    else if(side1==side2||side2==side3||side3==side1){
        cout<<"the triangle is an isocials triangle";
    }
    else{
        cout<<"the triangle is a scalene triangle";
    }
    return 0;
}