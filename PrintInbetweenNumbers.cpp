#include <iostream>
using namespace std;

void printNumbers(int first, int last){
     for(int i=first; i<=last; i++){
        cout<<i<<" ";
     }
}

int main(){
    int first, last;
    cout<<"Enter the First Number:";
    cin>>first;
    cout<<"Enter the last number:";
    cin>>last;

    printNumbers(first,last);
    return 0;
}