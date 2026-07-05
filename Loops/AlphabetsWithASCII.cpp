#include<iostream>
using namespace std;
int main(){
    cout << "ASCII values of Capital letters: " << endl;
    int n = 65;
    for (n; n<=90; n++){
        cout << (char)n << " - ASCII : " << n << endl;
    }

    cout << "ASCII values of Small letters: " << endl;
    int m = 97;
    for (m; m<=122; m++){
        cout << (char)m << " - ASCII : " << m << endl;
    }
}