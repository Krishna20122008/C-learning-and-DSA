#include<iostream>
using namespace std;
int main(){
    int a; //No. of rows entry
    cout << "Enter the no. of rows: ";
    cin >> a;

    int b; //No. of columns entry
    cout << "Enter the no. of columns: ";
    cin >> b;

    int ascii = 97+b;
    for (int i=97; i<=ascii; i++){
        for(int j=1; j<=a; j++){
            cout << (char)i << " ";
        }
        cout << endl;
    }
}