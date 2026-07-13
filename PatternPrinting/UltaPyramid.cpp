#include<iostream>
using namespace std;
int main(){

    int a;
    cout << "enter rows: ";
    cin >> a;

    int nsp = 0;
    int nst = a*2-1;
    for (int i=1; i<=a; i++){
        for (int j=0; j<=nsp; j++){
            cout << "  ";
        }
        for (int j=1; j<=nst; j++){
            cout << "* ";
        }
        cout << endl;
        nst-=2;
        nsp++;
    }
}