#include <iostream>
#include <cmath>
using namespace std;
//to calculate the hypotenuse of the right angeled triangle
int main(){
    int base,perpendicular;
    cout<<"the base of the triangle is: ";
    cin>>base;
    cout<<"the perpendicular of the triangle is: ";
    cin>>perpendicular;
    cout<<sqrt(base*base+perpendicular*perpendicular);
    return 0;
}