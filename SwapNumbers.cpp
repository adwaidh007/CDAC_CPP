#include<iostream>
using namespace std;

void swapNumbers(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a,b;

    cout<<"Enter two numbers:";
    cin>>a>>b;

    cout<<"Before Swapping: a = "<<a<<", b = "<<b<<endl;
    swapNumbers(a,b);

    cout<<"After swapping: a ="<<a<<", b = "<<b<<endl;

    return 0;
}