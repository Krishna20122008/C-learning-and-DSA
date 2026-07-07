#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    while (n!=0){
        int reverse = (n%10);
        cout << reverse << "" ;
        n/=10;
    }
}