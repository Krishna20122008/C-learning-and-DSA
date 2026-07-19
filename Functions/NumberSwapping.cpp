#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 3;

    cout << a << " " << b << endl;

    int temp = a;
    
    a=b;        // Swapped
    b=temp;

    cout << a << " " << b << endl;
}