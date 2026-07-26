#include<iostream>
using namespace std;
int main(){
    int marks[] = {32,45,33,67,34}; // Array
    cout << marks[4] << endl;
    cout << marks[2] << endl;
    marks[2] = 54;
    cout << marks[2] << endl;
    cout << "Enter the marks of index 2 now : " ;
    cin >> marks[2] ;
    cout << marks[2] << endl;
}