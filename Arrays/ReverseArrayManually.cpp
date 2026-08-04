#include<iostream>
using namespace std;
void swap(int arr[]){
    for(int i = 0; i < 3; i++){
        int j = 6;
        j--;
        int temp;
        temp = arr[j];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main(){
    int arr[] = {10,20,30,40,50,60,70};
    swap(arr);
    for(int ele : arr) cout << ele << " ";
}

// Yet to be completed