#include<iostream>
using namespace std;
int main(){
    int x = 6;
    int* p1 = &x;
    int* p2 = &x;

    cout << p1 << endl;
    cout << p2 << endl;     //The addresses of x in p1 and p2 are the same
    cout << &p1 << endl;    //But the addresses of p1 and p2 are different
    cout << &p2 << endl;

    cout << *p1 << endl;    //"*" is called dereference operator, if we put *p1 then it goes to the address stored in p1 and prints the value of the original variable.
}