#include<iostream>
using namespace std;
int main(){
    int arr[] = {23,56,656,32,67,23,55};
    cout << "The elements of the array are: ";
    for (int i = 0; i<size(arr); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int max = 0;
    for (int i = 0; i<size(arr); i++){
        if (arr[i] > max) max = arr[i];
        else continue;
    }
    cout << "The max element is: " << max << endl;
}