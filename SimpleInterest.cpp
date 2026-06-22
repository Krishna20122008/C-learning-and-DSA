#include<iostream>
using namespace std;
int main(){

    float Principle;
    cout << "Enter the principle amount: ";
    cin >> Principle;
    
    float Rate;
    cout << "Enter the rate of interest: ";
    cin >> Rate;

    float Time;
    cout << "Enter the time of loan in years: ";
    cin >> Time;

    float SimpleInterest = Principle*Rate*Time/100;
    cout << "The simple interest of this loan is: " << SimpleInterest << endl;
    cout << "The Final amount of payment is: " << Principle+SimpleInterest << endl;
}