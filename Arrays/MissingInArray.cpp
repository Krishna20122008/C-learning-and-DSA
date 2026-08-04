#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums = {5,4,1,6,0,2};
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for(int i = 0; i<n; i++){
        if (i==nums[i]) continue;
        if (i!=nums[i]){
            cout << i;
            break;
        }
    }
    
    return n;
}