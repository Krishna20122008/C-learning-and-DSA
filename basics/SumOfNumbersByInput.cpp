// C++ code to find the sum of two digits entered by the user..

#include<iostream>
using namespace std;
int main(){

    int x;
    cout << "Enter a number: ";
    cin >> x;
    
    int y;
    cout << "Enter a number: ";
    cin >> y;

    int sum = x+y;
    cout << "Sum of the entered digits is: " << sum <<endl;
}