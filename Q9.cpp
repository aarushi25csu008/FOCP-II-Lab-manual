#include <iostream>
using namespace std;
//programme to clasify if the entered letter is vowel or consonant
int main(){
    char letter;
    cout<<"enter a letter: ";
    cin>>letter;
    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'){
        cout<<"the letter is a vowel";
    }
    else{
        cout<<"the letter is a consonant";
    }
    return 0;
}

