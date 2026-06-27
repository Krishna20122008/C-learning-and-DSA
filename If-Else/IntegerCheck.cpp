#include<iostream>
using namespace std;
int main(){
    float num;
    cout << "Enter a number to find if its an integer or not: ";
    cin >> num;
    int intnum = (int)num;
    if(intnum == num) cout << "Number is an integer" << endl;
    else cout << "Number is not an integer" << endl;

}