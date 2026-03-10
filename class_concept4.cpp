// #include <iostream>
// using namespace std;
// class Movieticket{
//     string movieName;
//     int seatNumber;
//     int ticketPrice;
//     bool isBooked=true;
//     public:
//     Movieticket(){
//         isBooked=false;
//         ticketPrice=200;
//     }
//     Movieticket(string name,int seat,int price){
//       movieName=name;
//       cout<<"the movie nmae is:"<<movieName<<endl;
//       seatNumber=seat;
//       cout<<"the seat price is:"<<seatNumber<<endl;
//       ticketPrice=price;
//       cout<<"the price of the ticket is:"<<ticketPrice<<endl;
//     }
//     bookticket(){
//         isBooked=true;
//         cout<<"the ticket is booked"<<endl;
//     }
//     cancelticket(){
//         isBooked=false;
//         cout<<"the ticket is canceld"<<endl;
//     }
//     display(){
//         cout<<"the name of the movie is:"<<movieName<<endl;
//         cout<<"the seat number is:"<<seatNumber<<endl;
//         cout<<"the price of the ticket is:"<<ticketPrice<<endl;
//         cout<<"the book is:"<<isBooked<<endl;
//     }
// };
// int main(){
//     Movieticket u1("3 idiots",326,45);
//     u1.display();
// }

// #include <iostream>
// using namespace std;
// class ElectricityBill{
//     string consumername;
//     int units;
//     float billAmount;
//     public:
//     ElectricityBill(){
//         consumername="Not Assigned";
//         units=0;
//         billAmount=0;
//     }
//     ElectricityBill(string name,int unit){
//         consumername=name;
//         cout<<"the name of the consumer is :"<<consumername<<endl;
//         units=unit;
//         cout<<"the units used is:"<<units<<endl;
//     }
//     void calculateBill(){
//         if(units>100){
//             billAmount=units*5;
//         }
//         else if(units>200){
//             billAmount=units*10;
//         }
//     }
//     void displayBill(){
//         cout<<"the name of the consumer is:"<<consumername<<endl;
//         cout<<"the units used is:"<<units<<endl;
//         cout<<"the total bill amount is:"<<billAmount<<endl;
//     }
// };
// int main(){
//     ElectricityBill u1("Aarushi chaubey",250);
//     u1.calculateBill();
//     u1.displayBill();
// }

// #include <iostream>
// using namespace std;
// class LibraryFine{
//     string studentName;
//     int daysLate;
//     float fineAmount;
//     int fine;
//     public:
//     LibraryFine(){
//         studentName="Not Assigned";
//         daysLate=0;
//         fineAmount=0;
//     }
//     LibraryFine(string name,int days,int fine){
//         studentName=name;
//         daysLate=days;
//         fineAmount=fine;
//         cout<<"the name of the student is:"<<studentName<<endl;
//         cout<<"the number of days late:"<<daysLate<<endl;
//         cout<<"the amount of fine:"<<fineAmount<<endl;
//     }
//     void calculatefine(){
//          fine=daysLate*fineAmount;
//     }
//     void displayfine(){
//         cout<<"the name of the student is:"<<studentName<<endl;
//         cout<<"the number of days late:"<<daysLate<<endl;
//         cout<<"the amount of fine:"<<fineAmount<<endl;
//         cout<<"the total amount of fine is:"<<fine<<endl;
//     }
// };
// int main(){
//     LibraryFine u1("aarushi chaubey",3,20);
//     u1.calculatefine();
//     u1.displayfine();
// }

// #include <iostream>
// using namespace std;
// class Employee{
//     string empname;
//     float basicSalary;
//     float grossSalary;
//     public:
//     Employee(){
//         empname="Not Assigned";
//         basicSalary=0;
//         grossSalary=0;
//     }
//     Employee(string name,float salary){
//         empname=name;
//         basicSalary=salary;
//     }
//     void calculateSalary(){
//         grossSalary=basicSalary*12;
//     }
//     void displaySalary(){
//         cout<<"the name of the employee is:"<<empname<<endl;
//         cout<<"the basic salary of the employee is:"<<basicSalary<<endl;
//         cout<<"the total salary of the employee is:"<<grossSalary<<endl;
//     }
// };
// int main(){
//     Employee u1("aarushi chaubey",50000);
//     u1.calculateSalary();
//     u1.displaySalary();
// }

#include <iostream>
using namespace std;
class Product{
    string productName;
    float price;
    int quantity;
    float totalAmount;
    public:
    Product(){
        productName="not given";
        price=0;
        quantity=0;
        totalAmount=0;
    }
    Product(string name,float money,int number){
        productName=name;
        price=money;
        quantity=number;
    }
    void calculatetotal(){
        totalAmount=price*quantity;
    }
    void display(){
        cout<<"product name:"<<productName<<endl;
        cout<<"price:"<<price<<endl;
        cout<<"quantity:"<<quantity<<endl;
        cout<<"the total amount is:"<<totalAmount<<endl;
    }
    ~Product(){
        cout<<"the destructor has been called";
    }
};
int main(){
    Product u1("soap",20,3);
    u1.calculatetotal();
    u1.display();
}