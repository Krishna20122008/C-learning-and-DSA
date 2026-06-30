// This is a code to take input from user of three sides of triangle and tell if those can be the three sides of triangle or not..

#include<iostream>
using namespace std;
int main(){

    float side1;
    cout << "Enter the length of first side";
    cin >> side1;
    float side2;
    cout << "Enter the length of second side";
    cin >> side2;
    float side3;
    cout << "Enter the length of third side";
    cin >> side3;
    
    if (side1 + side2 > side3 || side2 + side3 > side1 || side3 + side1 > side2) cout << "These can be the sides of a triangle.";
    else cout << "They can't be the sides of a triangle.";
}