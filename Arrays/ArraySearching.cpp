#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array: " ;
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: " ;
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "The elements of the array are : " ;
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int x;
    cout << "Enter the element you want to search for: ";
    cin >> x;

    for (int i=0; i<n; i++){
        if (arr[i] == x){
            cout << "The element is in " << i << " index" << endl;
        }
        else continue;
    }
}