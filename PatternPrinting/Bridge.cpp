#include<iostream>
using namespace std;
int main(){

    int a;
    cout << "Enter no. of rows: " ;
    cin >> a;

    for (int i=1; i<=1; i++);{      // first line of stars
        for (int j=1; j<=2*a+1; j++){
            cout << "* ";
        }
        cout << endl;
    }       

    int nsp = 1;
    int nst = a;
    for (int i=1; i<=a; i++){
        for (int j=1; j<=nst; j++){
            cout << "* " ;
        }
        for (int j=1; j<=nsp; j++){
            cout << "  " ;
        }
        for (int j=1; j<=a+1-i; j++){
            cout << "* " ;
        }
        cout << endl;
        nsp+=2;
        nst--;
    }
}