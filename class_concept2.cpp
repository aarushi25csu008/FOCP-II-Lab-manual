// #include <iostream>
// using namespace std;

// class Student{
//     int roll_no;
//     string name;
//     int result;
//       public:
//     void display(){
//         cout<<"\nthe name of the student:"<<name;
//         cout<<"\nthe roll no. of the student:"<<roll_no;
//         cout<<"\nthe result of the student:"<<result;
//     }
//     void student_entry(){
//         cout<<"enter the name of the student:";
//         cin>>name;
//         cout<<"enter the roll no.:";
//         cin>>roll_no;
//         cout<<"\n enter the result of the student:";
//         cin>>result;
//     }
// };

// int main(){
//  Student c1;
//  c1.student_entry();   
//  c1.display();
// }

// #include <iostream>
// using namespace std;

// class Rectangle{
//     int length;
//     int breadth;
//     public:
//     void input(){
//         cout<<"enter the length:";
//         cin>>length;
//         cout<<"enter the breadth:";
//         cin>>breadth;
//     }
//     void output(){
//         cout<<"the area is:"<<length*breadth;
//     }
// };

// int main(){
//     Rectangle c1;
//     c1.input();
//     c1.output();
// }

// #include <iostream>
// using namespace std;

// class Bankaccount{
//     int account_num;
//     string name;
//     int balance=1000;
//     int acc;
//     public:
//     void deposit(){
//         cout<<"enter the account number:";
//         cin>>account_num;
//         cout<<"enter your name:";
//         cin>>name;
//         cout<<"enter the amount to be deposited:";
//         cin>>acc;
//         balance+=acc;
//         cout<<"your balance is"<<balance;
//     }
//     void displayBalance(){
//         cout<<"the account number is:"<<account_num<<endl;
//         cout<<"the name is:"<<name<<endl;
//         cout<<"the balance left is:"<<balance<<endl;
//     } 
// };

// int main(){
//     Bankaccount c1;
//     c1.deposit();
//     c1.displayBalance();
// }

// #include <iostream>
// using namespace std;

// class Car{
//     string brand;
//     string color;
//     string car_type;
//     int make_year;
//     public:
//     void display(){
//         cout<<"\n brand of the car:"<<brand;
//         cout<<"\n make_year of the car:"<<make_year;
//         cout<<"\n car type:"<<car_type;
//         cout<<"\n clour of the car:"<<color;
//     }
//     void car_entry(){
//         cout<<"enter brand,make, car type,color ";
//         cin>>brand>>make_year>>car_type>>color;
//     }};

//     int main(){
//         Car c1;
//         c1.car_entry();
//         c1.display();
//     }
