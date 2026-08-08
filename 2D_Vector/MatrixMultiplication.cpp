#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1 = {2,9,7,2};
    vector<int> v2 = {2,5,4,1};
    vector<int> v3 = {6,3,0,8};
    vector<int> v4 = {1,7,5,1};
    vector<int> v5 = {0,9,4,1};
    vector<int> v6 = {1,3,9,4};
    vector<int> v7 = {6,2,5,2};
    vector<int> v8 = {1,0,6,0};
    vector<vector<int>> m1 = {v1,v2,v3,v4};
    vector<vector<int>> m2 = {v5,v6,v7,v8};
    int a = m1.size();

    vector<vector<int>> res(a,vector<int>(a,0));
    for(int i = 0; i<a; i++){
        for(int j = 0; j<a; j++){
            for(int k = 0; k<a; k++){
                res[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i = 0; i<a; i++){
        for(int j=0; j<res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}