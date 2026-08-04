#include<iostream>
#include<vector>
using namespace std;
int main(){

    int zeros = 0;
    int ones = 0;
    vector<int> arr = {0,1,0,1,0,0,1,1,1,0};
    for (int ele: arr){
        if (ele == 0) zeros++;
        else ones++;
    }
    for (int i = 0; i<zeros; i++){
        arr[i] = 0;
    }
    for (int i = zeros; i<arr.size(); i++){
        arr[i] = 1;
    }

    for(int ele: arr){
        cout << ele << " ";
    }
}