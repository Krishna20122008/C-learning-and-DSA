#include<iostream>
#include<vector>
using namespace std;
int change(vector<int> v){      // vector is pass by value and array is pass by reference
    v[2] = 45;                  // so the value of array actually changes but vector value doesn't change
}
int main(){
    vector<int> arr = {34,5,2,53,51};
    cout << "original: ";
    for(int ele: arr) cout << ele << " ";
    cout << endl;

    change(arr);
    cout << "new: " ;
    for(int ele : arr) cout << ele << " ";
    cout << endl;
}