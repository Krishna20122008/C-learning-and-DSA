#include<iostream>
using namespace std;
int main(){

    int a;
    cout << "Enter a number: ";
    cin >> a;

    for (int i=1; i<=a; i++){
        for (int j=1; j<=a; j++){
            cout << min(i,j) << " ";
        }
        for (int j=a-1; j>=1; j--){
            cout << min(i,j) << " ";
        }
        cout << endl;
    }
    for (int i=a-1; i>=1; i--){
        for (int j=1; j<=a; j++){
            cout << min(i,j) << " ";
        }
        for (int j=a-1; j>=1; j--){
            cout << min(i,j) << " ";
        }
        cout << endl;
    }
        
}