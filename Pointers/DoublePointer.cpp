#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int* p1 = &x;
    int** p2 = &p1;     // Double Pointer is used to store the address of another pointer

    cout << &x << endl;
    cout << p1 << endl;

    cout << &p1 << endl;
    cout << p2 << endl;
}