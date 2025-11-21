#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;

    cout << "Value of a :"<<a<<endl;
    cout << "Address of a :"<<&a<<endl;
    cout << "Pointer ptr stores :"<<ptr<<endl;
    cout << "Value pointed by ptr :"<<*ptr<<endl;

    *ptr = 20;
    cout << "New value of a (After using pointer) :"<<a<<endl;
    return 0;
}