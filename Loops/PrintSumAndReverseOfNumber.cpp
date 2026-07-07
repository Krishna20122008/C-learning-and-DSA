#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Reverse of the number is: ";
    while (n!=0){
        int reverse = (n%10);
        cout << reverse << "" ;
        n/=10;
        sum+=reverse;

    }
    cout << endl;
    cout << "Sum of the number is: " << sum << endl;
}