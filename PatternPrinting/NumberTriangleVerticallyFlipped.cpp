#include<iostream>
using namespace std;
int main(){

    int a;
    cout << "Enter No. of rows: ";
    cin >> a;

    for (int i=1; i<=a; i++){
        for (int j=1; j<=a-i; j++){       // j<=a+1-i ki jagah a-i kiya hai because output me ek space aa ja rha tha front me
            cout << "  " ;
        }
        for (int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}