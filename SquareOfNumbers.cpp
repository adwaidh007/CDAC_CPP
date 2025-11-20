#include <iostream>
using namespace std;

int main(){
    int num,i;
    cout<<"Enter a number :";
    cin>>num;

    cout<<"Squares";
    for(i=1;i<=num;i++){
        cout<<i*i<<endl;
    }
    return 0;
}