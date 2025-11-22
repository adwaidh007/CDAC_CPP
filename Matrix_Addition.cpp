#include<iostream>
using namespace std;

int main(){

    int rows,cols;
    cout<<"Enter the number of rows:";
    cin>>rows;
    cout<<"Enter the number of columns:";
    cin>>cols;

    int A[10][10], B[10][10], C[10][10];

    cout<<"\nEnter elements of Matrix A:\n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>> A[i][j];
        }
    }

    cout<<"\nEnter elements of Matrix B:\n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>> B[i][j];
        }
    }

    if(rows != cols){
        cout<<"Matrix addition not possible for given dimensions."<<endl;
        return 0;
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout<<"\nResultant Matrix :\n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}