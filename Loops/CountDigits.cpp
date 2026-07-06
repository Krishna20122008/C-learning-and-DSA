#include <iostream>
using namespace std;
int main(){
    int count = 0;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    while (n>0){
        n/=10;
        count++;
    }
    cout << count << endl;
}