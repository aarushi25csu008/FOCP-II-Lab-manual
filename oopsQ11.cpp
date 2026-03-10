#include <iostream>
using namespace std;
class Course{
    string course_name;
    string instructor_name;
    int course_duration;
    public:
    Course();
    display();
    ~Course(){
        cout<<"the destructor has been called";
    }
};
Course::Course(){
    course_name="cloud digital leader";
    instructor_name="swagata";
    course_duration=16;
}
Course::display(){
    cout<<"course name:"<<course_name<<endl;
    cout<<"instructor name:"<<instructor_name<<endl;
    cout<<"course duration:"<<course_duration<<endl;
}
int main(){
    Course m1;
    m1.display();
}