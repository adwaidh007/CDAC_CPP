#include<iostream>
#include <cmath>
using namespace std;

int largestDigit(int num){
    int largest = 0;
    num = abs(num);

    while(num > 0){
        int digit = num % 10;
        if(digit > largest){
            largest = digit;
        }
        num = num / 10;
    }
    return largest;
}

int main(){
    int num;
    cout<<"Enter the Number:";
    cin>>num;

    int Largest_Num = largestDigit(num);
    cout<<"Largest Number: "<<Largest_Num<<endl;
    return 0;
}