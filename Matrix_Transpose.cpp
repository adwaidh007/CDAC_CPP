#include<iostream>
using namespace std;

int main(){
    int rows, cols;

    cout<<"Enter the number of rows:";
    cin>>rows;
    cout<<"Enter the number of columns:";
    cin>>cols;

    int A[10][10], T[10][10];

    cout<<"\nEnter the elements for Matrix\n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
               cin>>A[i][j];
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            T[j][i] = A[i][j];
        }
    }

    cout<<"\nTranspose Matrix:\n";
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            cout << T[i][j] << " ";
        }
        cout<<endl;
    }
    
    return 0;

}