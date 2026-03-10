//program to calculate volume of different 2D shapes using function
#include <iostream>
using namespace std;
int volume(int);
int volume(int,int,int);
int volume(int,int);
int main(){
cout<<"the volume of cube is:"<<volume(5)<<endl;
cout<<"the volume of cube:"<<volume(4,5,2)<<endl;
cout<<"the volume of cylinder:"<<volume(4,5)<<endl;
}
int volume(int a){
    int total;
    total=a*a*a;
    return(total);
}
int volume(int a,int b,int c){
    int total;
    total=a*b*c;
    return(total);
}
int volume(int a,int b){
    int total;
    total=3.14*a*a*b;
    return(total);
}