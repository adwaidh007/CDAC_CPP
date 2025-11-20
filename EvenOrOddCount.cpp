#include <iostream>
using namespace std;

int main(){
    int n;
    int counteven=0,countodd=0,countzero=0;
    cout<<"Enter a number";
    cin>>n;
    
    while(n>0){
       int digit = n % 10;
        if(digit == 0){
            countzero++;
        }else if(digit % 2 == 0){
            counteven++;
        }else{
            countodd++;
        }
        n = n / 10;
    }
    cout<<"Number of even digits: "<<counteven<<endl;
    cout<<"Number of odd digits: "<<countodd<<endl;
    cout<<"Number of zero digits: "<<countzero<<endl;
    return 0;

}