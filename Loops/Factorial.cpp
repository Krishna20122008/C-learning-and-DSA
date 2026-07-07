#include<iostream>
using namespace std;
int main(){
    int fact;
    cout << "Enter a number for factorial: " ;
    cin >> fact;
    int factorial = 1;
    int n = 1;
    while(n <= fact){
        factorial *= n;
        n++;
    }
    cout << "The factorial is: " << factorial << endl;
    return 0;
}