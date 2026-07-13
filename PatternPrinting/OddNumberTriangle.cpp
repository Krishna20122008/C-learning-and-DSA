#include<iostream>
using namespace std;
int main(){

    int a;
    cout << "Enter no. of rows: ";
    cin >> a;

    int x = 1;

    for (int i=1; i<=a; i++){
        for (int j=1; j<=i; j++){
            cout << j*2 -1 << " " ;
        }
        cout << endl;
    }
}