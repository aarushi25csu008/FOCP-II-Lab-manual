//programme to display book details
#include <iostream>
using namespace std;
class Book{
    string title;
    int price;
    public:
    Book(string,int);
    display();
};
Book::Book(string T,int P){
    title=T;
    price=P;
}
Book::display(){
    cout<<"the title of the book is:"<<title<<endl;
    cout<<"the price of the book is:"<<price<<endl;
}
int main(){
    Book m1("the women in the window",350);
    m1.display();
}