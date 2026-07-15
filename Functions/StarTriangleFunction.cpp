#include<iostream>
using namespace std;

void StarTriangle(){

    int a;
    cout << "Enter No. of rows of first triangle: ";
    cin >> a;

    int b;
    cout << "Enter No. of rows of second triangle: ";
    cin >> b;

    int c;
    cout << "Enter No. of rows of third triangle: ";
    cin >> c;

    for (int i=1; i<=a; i++){
        for (int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for (int i=1; i<=b; i++){
        for (int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for (int i=1; i<=c; i++){
        for (int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    StarTriangle();
}