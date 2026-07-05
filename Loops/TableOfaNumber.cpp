#include <iostream>
using namespace std;
int main(){
    cout << "Enter a number for its table: ";
    int n;
    cin >> n;

    for (int i=1; i<=10; i++){
        cout << n << " X " << i << " = " << i*n << endl;
    }
}