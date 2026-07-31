#include<iostream>
using namespace std;

void change(int x){
    x = 20;
}

void changeArray(int x[]){
    x[0] = 20;
}

int main(){
    int x = 10;
    change(x);      // Here as in the change() function, a reference variable is formed, the x of main function is not changed
    cout << x << endl;

    int arr[] = {10,3,5,23,56};
    cout << arr[0] << endl;
    changeArray(arr);   // Here in case of array, even if a reference x array is formed in changeArray function, still the value of 0 index of arr is changed.
    cout << arr[0] << endl;

}