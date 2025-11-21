#include<iostream>
using namespace std;

float calculateBill(int units) {
    float amount = 0;

    if (units <= 100) {
        amount = units * 3.0;
    }
    else if (units <= 200) {
        amount = (100 * 3.0) + (units - 100) * 4.5;
    }
    else { 
        amount = (100 * 3.0) + (100 * 4.5) + (units - 200) * 6.0;
    }

    return amount;
}

float addFixedCharges(int amount){
    int fixedCharge = 50;
    return amount + fixedCharge;
}

int main(){
    int units;
    cout<<"Enter the Reading Unit: ";
    cin>>units;
    float amount = calculateBill(units);
    float total = addFixedCharges(amount);
    cout<<"Total amount:"<<total;
    return 0;
}