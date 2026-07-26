#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array: " ;
    cin >> n;

    int sum = 0;

    int arr[n];
    cout << "Enter the elements of array: " ;
    for (int i=0; i<n; i++){
        cin >> arr[n];
        sum+=arr[n];
    }

    cout << "The sum of elements of array are: " << sum ;
}