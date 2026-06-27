#include<iostream>
using namespace std;
int main(){
    float cp;
    cout << "Enter the cost price: ";
    cin >> cp;

    float sp;
    cout << "Enter the selling price: ";
    cin >> sp;

    if (cp<sp) cout << "You have made a profit" << endl << "Profit amount: " << (sp-cp);
    if (sp<cp) cout << "You have made a loss" << endl << "Loss amount: " << (cp-sp);
    if (sp==cp) cout << "Neither loss nor profit" << endl;
}