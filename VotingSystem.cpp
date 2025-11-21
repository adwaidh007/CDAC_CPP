#include<iostream>
using namespace std;

int birthYear;
int age;
bool eligible;

void inputDOB(){
    cout<<"Enter your birth year:";
    cin>>birthYear;
}

int calculateAge(int birthYear){
    int currentYear = 2025;
    return currentYear - birthYear;
}

bool checkEligibilty(int age){
    if(age >= 18)
        return true;
        else
        return false;
}

void printResult(int age, bool eligible){
    cout<<"\n---- Voting Eligibilty Result ----\n";
    cout<<"Age :"<<age<<endl;

    if(eligible)
    cout<<"Status : Eligible to Vote"<<endl;
    else
    cout<<"Status: Not Eligible to Vote"<<endl;
    cout<<"-------------------------------------\n";
}

int main(){
    inputDOB();
    age = calculateAge(birthYear);
    eligible = checkEligibilty(age);
    printResult(age,eligible);
    return 0;
}