#include <iostream>
using namespace std;

float simpleInterest(float amt,int years,float rate){
   return (amt * rate * years)/ 100;
}

int main(){
    float amt, rate;
    int years;
    cout<<"Enter the principle amount:";
    cin>>amt;
    cout<<"Enter No. of Years:";
    cin>>years;
    cout<<"Enter Rate of Interest:";
    cin>>rate;

    float SI = simpleInterest(amt,years,rate);

    cout<<"Simple Interest: "<<SI<<endl;
    return 0;

}