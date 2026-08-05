#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {2,4,2,1,5};
    vector<int> arr2 = {3,5,6,1,3};

    sort(arr.begin(), arr.end());
    sort(arr2.begin(), arr2.end());

    for(int ele : arr2){
        arr.push_back(ele);
    }

    for(int ele : arr){
        cout << ele << " ";
    }
}