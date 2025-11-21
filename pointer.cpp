#include <iostream>
using namespace std;

int main(){
    int i = 5;
    int *iptr;

    iptr = &i;
    cout<<"\ni = "<<i;
    cout<<"\niptr = "<<iptr;
    cout<<"\n&i = "<<&i;
}