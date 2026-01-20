#include <iostream>
using namespace std;
//code for maximum of 3 numbers in a game
int main(){
    int score1,score2,score3;
    cout<<"enter the first score: ";
    cin>>score1;
    cout<<"enter the second score: ";
    cin>>score2;
    cout<<"enter the score score: ";
    cin>>score3;
    if(score1>score2&&score1>score3){
        cout<<"the first player is winner!";
    }
    else if(score2>score1&&score2>score3){
        cout<<"the second player is a winner!";
    }
    else{
        cout<<"the third player is the winner!";
    }
    return 0;
}