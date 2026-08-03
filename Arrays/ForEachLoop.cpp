#include<vector>
#include<climits>
#include<iostream>
using namespace std;
int main(){
    vector<int> arr = {34,23,3,5,3};        // Another method to make a vector (like an array)
    for(int ele : arr){
        cout << ele << " ";
    }
    cout << endl;

    int grr[4];     // Garbage values will be printed
    for (int ele : grr){
        cout << ele << " ";
    }
}