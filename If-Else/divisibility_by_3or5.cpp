#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n%3==0 || n%5==0) cout << "n is divisible by 3 or 5" << endl;
    else if (n%3==0 && n%5==0) cout << "n is divisible by 3 and 5" << endl;
    else cout << "n is divisible by neither 3 nor 5" << endl;
}