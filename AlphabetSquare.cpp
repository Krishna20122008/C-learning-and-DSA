#include<iostream>
using namespace std;
int main(){

    int a; //No. of rows entry
    cout << "Enter the no. of rows: ";
    cin >> a;

    int b; //No. of columns entry
    cout << "Enter the no. of columns: ";
    cin >> b;

    int ascii = (65 + b);

    for (int i=1; i<=a; i++){
        for (int j=65; j<=ascii; j++){
            cout << (char)j << " " ;
        }
        cout << endl;
    }
}