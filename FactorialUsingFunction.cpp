#include <iostream>
using namespace std;

long long factorial(int n){
    long long fact = 1;
    for(int i = 1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;

    if(num<0){
        cout<<"Factorial not defined for negetive numbers.";
    }else{
        cout<<"Factorial = "<<factorial(num);
    }
    return 0;
}