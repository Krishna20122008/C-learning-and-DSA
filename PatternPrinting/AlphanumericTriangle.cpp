#include<iostream>
using namespace std;
int main(){
    int a; //No. of rows entry
    cout << "Enter the no. of rows: ";
    cin >> a;

    for (int i=1; i<=a; i++){
        
        if (i%2==0){                 // For even lines, numbers are printed
            for (int j=1; j<=i; j++){
                cout << j << " ";
            }
            cout << endl;
        }
        
        else{                         // For odd lines, alphabets are printed
            int ascii = (65+i);
            for (int j=65; j<ascii; j++){
                cout << (char)j << " ";
            }
            cout << endl;
        }
    }
}