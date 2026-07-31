#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {23,56,656,32,67,23,55};
    cout << "The elements of the array are: ";
    for (int i = 0; i<size(arr); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int min = INT_MAX;
    for (int i = 0; i<size(arr); i++){
        if (arr[i] < min) min = arr[i];
        else continue;
    }
    cout << "The min element is: " << min << endl;
}