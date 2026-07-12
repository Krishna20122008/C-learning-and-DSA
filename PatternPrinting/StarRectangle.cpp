#include <iostream>
using namespace std;
int main(){
    int j;
    cout << "Enter the length: " ;
    cin >> j;

    int i;
    cout << "Enter the breadth: " ;
    cin >> i;

    for (int a=1; a<=i; a++){
        for (int b=1; b<=j;  b++){
            cout << "* " ;
        }
        cout << endl;
    }
}