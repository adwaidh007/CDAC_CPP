#include <iostream>
using namespace std;

int main(){
    int n,freq[10]={0};
    cout<<"Enter a number:";
    cin>>n;

    if(n == 0){
        freq[0] = 1;
    }else{
         while(n > 0){
            int digit = n % 10;
            freq[digit]++;
            n = n / 10;
         }
    }

    cout<<"Digit Frequency:";
    for(int i = 0;i<10;i++){
        cout << i << " = " << freq[i] << endl;
    }
    return 0;
}