#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {2,7,11,5};
    int target = 9;
    vector<int> sum(2);
    for (int i=0; i<nums.size(); i++){
        for (int j = i+1; j<nums.size(); j++){
            if (nums[i]+nums[j]==target){
                sum[0] = i;
                sum[1] = j;
            }
        }
    }
    for (int ele : sum) cout << ele << " " ;
    cout << endl;
}