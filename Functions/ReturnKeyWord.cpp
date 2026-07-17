#include<iostream>
using namespace std;

void fun(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << n << endl;
    cout << n * n << endl;
    if (n*n > 500) return;
    cout << n*n*n << endl;
}
int main(){
    fun();
}