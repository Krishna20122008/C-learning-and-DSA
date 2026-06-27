#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number to check if it is even or odd: ";
    cin >> num;

    if (num % 2 == 0) cout << "Entered number is an even number";
    else cout << "Entered number is an odd number";
}