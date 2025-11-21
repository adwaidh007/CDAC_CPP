#include <iostream>
using namespace std;

char GradeCalculate(int marks){
    if(marks > 90){
        return 'A' ;
    }else if(marks > 80){
        return 'B';
    }else if(marks > 60){
        return 'C';
    }else if(marks > 50){
        return 'D';
    }else{
        return 'F';
    }
}

int main(){
    int marks;
    cout<<"Enter the Marks:";
    cin>>marks;
    char Grade = GradeCalculate(marks);
    cout<<"Marks Obtained: "<<marks<<" Grade: "<<Grade<<endl;
    return 0;
}