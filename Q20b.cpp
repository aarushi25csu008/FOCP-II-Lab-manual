#include <iostream>
using namespace std;
//printing a downward number triangle
int main(){
    int i,n;
    for(i=1;i<=5;i++){
        for(n=5;n>=i;n--){
            cout<<n;
        }
        cout<<endl;
    }
}