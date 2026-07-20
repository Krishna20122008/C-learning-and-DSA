#include<iostream>
using namespace std;
int main(){
    int x = 32;
    int* ptr = &x;

    cout << x << endl;      // Variable
    cout << ptr << endl;    // Address of variable stored in pointer 
    cout << &x << endl;     // Address of variable
    cout << &ptr << endl;   // Address of pointer
}