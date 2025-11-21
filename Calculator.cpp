#include <iostream>
using namespace std;

float add(float a, float b) {return a + b;}
float subtract(float a, float b){return a - b;}
float multiply(float a, float b){return a * b;}
float divide(float a, float b){return b!=0 ? a / b : 0;}

int main(){
    int choice;
    float num1,num2;

    do{
        cout<<"----- Calculator Menu -----\n";
        cout<<"1. Addition\n";
        cout<<"2. Substraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n";
        cout<<"6. Enter your choice:";
        cin>>choice;

        cout<<"Enter two numbers:";
        cin>>num1>>num2;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch(choice){
            case 1:
                 cout<<"Result:"<<add(num1,num2)<<endl;
                 break;
            case 2:
                cout<<"Result:"<<subtract(num1,num2)<<endl;
                break;
            case 3:
                cout<<"Result:"<<multiply(num1,num2)<<endl;
                break;
            case 4:
                cout<<"Result:"<<divide(num1,num2)<<endl;
                break;
            case 5:
                cout<<"Exiting..."<<endl;
                break;
            default:
               cout<<"Invalid choice! Please try again."<<endl;
        }
    }while(choice !=5);
    return 0;
}