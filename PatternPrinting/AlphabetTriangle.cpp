#include<iostream>
using namespace std;
int main(){

    int a; //No. of rows entry
    cout << "Enter the no. of rows: ";
    cin >> a;
    
    for (int i = 1; i<=a; i++){
        int ascii = (64+i);
        for (int j=65; j<=ascii; j++){  
            cout << (char)j << " ";
        }
        cout << endl;
    }
}