#include<iostream>
using namespace std;
int main(){

    for (int i=1; i<=4; i++){
        for (int j=1; j<=4-i; j++){
            cout << "  ";
        }
        for (int j=1; j<=(i*2)-1; j++){
            cout << "* ";
        }
        cout << endl;
    }

    int nst = 5; 
    int nsp = 1;

    for (int i=1; i<=3; i++){
        for (int j=1; j<=nsp; j++){
            cout << "  ";
        }
        for (int j=1; j<=nst; j++){
            cout << "* ";
        }
        cout << endl;
    }
}