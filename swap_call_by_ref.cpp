#include<iostream>
using namespace std;

void swap_by_ref(int &, int &);

int main(){
    int n1,n2;
    cout<<"Enter the first number:";
    cin>>n1;
    cout<<"Enter the second number:";
    cin>>n2;

    swap_by_ref(n1,n2);
    cout<<"n1="<<n1<<"&n1="<<&n1<<", n2="<<n2<<"&n2="<<&n2<<endl;
}

void swap_by_ref(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Inside swap_by_ref: a="<<a<<", b="<<b<<endl;
}