#include <iostream>
using namespace std;

int main(){
    int a,b,result=1;
    cout<<"Enter the base:";
    cin>>a;
    cout<<"Enter the exponent:";
    cin>>b;

    for(int i=1;i<=b;i++){
        result = result * a;
    }
    cout<<"Result:"<<result;
    return 0;
}