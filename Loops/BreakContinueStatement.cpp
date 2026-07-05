#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i<=10; i++){
        if (i==5) break;  // break statement breaks the loop when the condition is met
        else if (i==2) continue; // continue statement skips the statement present in the next line when condition is met
        cout << i << endl;
    }
}