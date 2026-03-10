// #include <iostream>
// using namespace std;
// class Student
// {
//     int Rollno;
//     string name;
//     int marks1;
//     int marks2;
//     int marks3;
//     public :
//     Student(){
//         marks1=0;
//         marks2=0;
//         marks3=0;
//     }
//     void inputDetails(){
//         cout<<"\n enter Rollno,name,marks1,marks2 & marks3";
//         cin>>Rollno>>name>>marks1>>marks2>>marks3;
//     }
//     int CalculateTotal(){
//         return(marks1+marks2+marks3);
//     }
//     void displayDetails(){
//         cout<<"\n name:"<<name<<"\n Rollno:"<<Rollno;
//         cout<<"\n marks1:"<<marks1<<"\n marks2:"<<marks2<<"\n marks3:"<<marks3;
//     }
// };

// int main(){
//     Student s1;
//     s1.inputDetails();
//     s1.displayDetails();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Rectangle{
//     int length;
//     int width;
//     int area=1;
//     public:
//     Rectangle(){
//       length=0;
//       width=0;  
//     }
//     Rectangle(int s){
//       length=width=s;
//       area=s*s;
//     }
//     Rectangle(int l ,int w){
//      length=l;
//      width=w;
//      area=l*w;
//     }
//     void displayDetails(){
//         cout<<area;
//     }
// };
// int main(){
//     Rectangle u1;
//     Rectangle u2(4,5);
//     u2.displayDetails();
// }

// #include <iostream>
// using namespace std;
// class Candy{
// string colour;
// int points;
// public:
// Candy(){
//     colour=0;
//     points=0;
// }
// Candy(string c){
//     colour=c;
// }
// Candy(string c,int p){
//     colour=c;
//     points=p;
// }
// void setCandy(string c,int p){
//     colour=c,points=p;
// }
// void displayCandy(){
//     cout<<"the colour of the candy is:"<<colour<<endl;
//     cout<<"your points are:"<<points<<endl;
// }
// void loosePoints(int p){
//     points=points-p;
// }
// };
// int main(){
//     Candy c1;
//     c1.setCandy("pink",7);
//     c1.loosePoints(5);
//     c1.displayCandy();
//     Candy c2("pink");
//     c2.displayCandy();
// }


// Basic Class Creation
// Create a class Student with:
// Data members: name, rollNo
// A constructor to initialize them
// A function display() to print details
// #include <iostream>
// using namespace std;
// class Student{
//     string name;
//     string rollno;
//     public:
//     input(){
//         cout<<"enter your name:";
//         cin>>name;
//         cout<<"nter the roll no.:";
//         cin>>rollno;
//     }
//     display(){
//         cout<<name;
//         cout<<rollno;
//     }
// };
// int main(){
//     Student u1;
//     u1.input();
//     u1.display();
// }

// #include <iostream>
// using namespace std;
// class Car{
//     string brand;
//     int year;
//     Car(){
//         brand="unknown";

//     }
//     input(){
//         cout<<"enter the brand of the car:";
//         cin>>brand;
//         cout<<"enter the year of the car:";
//         cin>>year;
//     }
//     display(){
//         cout<<"brand of the car is:"<<brand;
//         cout<<"year of the car is:"<<year;
//     }
// }

#include <iostream>
#include <string>
using namespace std;
class SmartLight{
    string brand;
    int brightness;
    bool isOn=true;
    public:
    SmartLight(){
     isOn=false;
     brightness=50;
    }

    input(){
        cout<<"enter the brand:";
        cin>>brand;
        cout<<"enter the brightness:";
        cin>>brightness;
    }
    turnOn(){
        isOn=true;
    }
    turnOff(){
        isOn=false;
    }
    increaseBrightness(){
        brightness++;
        cout<<"the increased brightness is:"<<brightness<<endl;
    }
    decreaseBrightness(){
        brightness--;
        cout<<"the decreased brightness is:"<<brightness<<endl;
    }
    display(){
        cout<<"the brand is:"<<brand<<endl;
        cout<<"the bightness is:"<<brightness<<endl;
    }
    ~SmartLight(){
      cout<<"object destroyed";
    }
};
int main(){
    SmartLight u1;
    u1.input();
    u1. increaseBrightness();
    u1.display();

}