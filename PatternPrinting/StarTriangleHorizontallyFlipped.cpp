#include<iostream>
using namespace std;
int main(){

    int a; //No. of rows entry
    cout << "Enter the no. of rows: ";
    cin >> a;

    // for (int i = a; i>=1; i--){      // Without maths format
    //     for (int j=i; j>=1; j--){
    //         cout << "* ";
    //     }
    //     cout << endl;

    for (int i=1; i<=a; i++){           // With maths format
        for (int j=1; j<=a+1-i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
