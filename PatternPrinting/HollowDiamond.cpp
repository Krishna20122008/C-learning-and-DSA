#include<iostream>
using namespace std;
int main(){
    for (int i=1; i<=1; i++){
        for (int j=1; j<=4; j++){
            cout << "  ";
        }
        for (int j=1; j<=1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    int nsp = 1;
    int nsp2 = 5;
    for (int i=2; i<=5; i++){
        for (int j=1; j<=5-i; j++){
            cout << "  ";
        }
        for (int j=1; j<=1; j++){
            cout << "* ";
        }
        for (int j=1; j<=nsp; j++){
            cout << "  ";
        }
        cout << "* ";
        cout << endl;
        nsp+=2;
    }
    for (int i=1; i<=4; i++){
        for (int j=1; j<=i; j++){
            cout << "  "; 
        }
        for (int j=1; j<=1; j++){
            cout << "* ";
        }
        if (i!=4){
            for (int j=1; j<=nsp2; j++){
                cout << "  ";
            }
        }
        cout << "* ";
        
        cout << endl;
        nsp2-=2;
    }
}