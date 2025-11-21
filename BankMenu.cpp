#include <iostream>
using namespace std;


float balance = 0;
void checkBalance(){
    cout<<"Current balance:"<<balance<<endl;
}
void deposit(){
    float amount;
    cout<<"Enter the amount:";
    cin>>amount;
    if(amount > 0){
        balance += amount;
    }else{
        cout<<"Invalid Amount";
    }
}
 void withdraw(){
    float amount;
    cout<<"Enter the Amount:";
    cin>>amount;
    if(amount > 0){
        balance -= amount;
    }else{
        cout<<"Invalid Amount";
    }
 }

 void miniStatement(){
    cout<<"---- Mini Statement ----";
    cout<<"Balance: "<<balance<<endl;
 }

 int main(){
    
    int choice;

    do{
        cout<<"----- BANK MENU -----";
        cout<<"1. Check Balance";
        cout<<"2. Deposit Amount";
        cout<<"3. Withdraw Amount";
        cout<<"4. Mini Statement";
        cout<<"5. Exit";
        cout<<"Enter your choice:";
        cin>>choice;

        switch(choice){
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                miniStatement();
                break;
            case 5:
                cout<<"Exiting...";
                break;
            default:
                cout<<"Invalid Choice";
        }
    }while(choice!=5);
    return 0;
 }