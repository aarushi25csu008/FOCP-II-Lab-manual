#include <iostream>
using namespace std;
//making a library entry using concept of the class

class Book {
    string title;
    string author;
    int price;
    public:
    void inputDetails(){
        cout<<"enter the title:";
        cin>>title;
        cout<<"enter the author:";
        cin>>author;
        cout<<"enter the price:";
        cin>>price;
    }
    void displayDetails(){
        cout<<"\nthe title is:"<<title<<endl;
        cout<<"the author is:"<<author<<endl;
        cout<<"the price is:"<<price<<endl;
    }
};

int main(){
    Book u1;
    u1.inputDetails();
    u1.displayDetails();
}