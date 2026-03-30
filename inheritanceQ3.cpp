//using the multiple inheritance concept to display academics marks and sports and scores
#include <iostream>
using namespace std;
class Academic{
    protected:
    int marks;
    public:
    Academic(int m){
        marks=m;
    }
};
class Sports{
    protected:
    int score;
    public:
    Sports(int s){
        score=s;
    }
};
class Result:public Academic,public Sports {
    public:
    Result(int m,int s):Academic(m),Sports(s){
       cout<<"marks:"<<marks<<endl;
       cout<<"score:"<<score<<endl; 
    }
};
int main(){
    Academic c1(78);
    Sports c2(50);
    Result c3(78,50);
}