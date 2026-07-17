#include<iostream>
#include<cmath>
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

    int x = max(a,b);
    int y = max(c,x);

    cout << "The max of three numbers is : " << y << endl;
}