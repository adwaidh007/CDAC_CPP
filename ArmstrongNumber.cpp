#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, original,remainder;
    int sum = 0;

    cout<<"Enter the number:";
    cin>>n;

    original = n;

    int digits = 0, temp = n;
    while(temp!=0){
        temp = temp / 10;
        digits++;
    }

    temp = n;
    while(temp!=0){
        remainder = temp % 10;
        sum += pow(remainder,digits);
        temp = temp/10;
    }

    if(sum == original){
        cout<<"It is an Armstrong number";
    }else{
        cout<<"It is not a Armstrong number";
    }
    return 0;
}