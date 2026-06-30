#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter first number: ";
    cin >> a;
    int b;
    cout << "Enter second number: ";
    cin >> b;
    int c;
    cout << "Enter third number: ";
    cin >> c;

    if (a>b and a>c) cout << a << " is greatest";
    else if (b>a and b>c) cout << b << " is greatest";
    else cout << c << " is greatest";
}