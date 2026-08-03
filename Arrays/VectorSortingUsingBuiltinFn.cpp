#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {3,42,43,22,5};
    for(int ele : arr) cout << ele << " ";
    cout << endl;

    // Sorting: 
    sort(arr.begin(), arr.end());
    for (int ele: arr) cout << ele << " ";
    cout << endl;

    // Reversing or descending sorting: 
    reverse(arr.begin(), arr.end());
    for (int ele: arr) cout << ele << " ";
    cout << endl;
}