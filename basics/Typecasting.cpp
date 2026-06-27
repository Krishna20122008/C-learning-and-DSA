// Typecasting in C++:

#include<iostream>
using namespace std;
int main(){

    char x = 'A';           // Explicit typecasting
    int ascii1 =  (int)x;
    cout << ascii1 << endl;

    char y = 'Z';           // Implicit typecasting
    int ascii2 = y;
    cout << ascii2 << endl;

    char z='B';             // Explicit typecasting shortcut
    cout << (int)z << endl;

    int n = 35;             // Typecasting from number to its character..
    cout << (char)n << endl;

    char ch1 = 'a';
    char ch2 = 'A';
    cout << ch1+ch2 << endl; // Here, error didn't come because, int+int=int , so, the ascii values of a and A are stored in ch1 and ch2 so the answer is integer, not error.
    cout << (char)(ch1+ch2) << endl;  // But, here we made the int value of ch1+ch2 to character so the answer will be in char.

    cout << 'a'+1 << endl;
    cout << (char)('a'+1) << endl;
}