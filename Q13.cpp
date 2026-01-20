#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    int roots1,roots2;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
     cout<<"enter the value of c: ";
    cin>>c;
    int D;
    D=b*b-4*a*c;
    if(D>0){
         roots1=(-b+sqrt(D))/(2*a);
         roots2=(-b-sqrt(D))/(2*a);
        cout<<"two real solutions";
        cout<<"the first root is: "<<roots1;
        cout<<"the second root is: "<<roots2;
    }
    else if(D==0){
        cout<<"one real solution";
        cout<<"the root is: "<<roots1;
    }
    else{
        cout<<"complex solution";
    }
}