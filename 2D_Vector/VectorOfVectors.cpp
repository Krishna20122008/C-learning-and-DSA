#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1 = {2,3,5,1,6};
    vector<int> v2 = {1,6};
    vector<int> v3 = {4,4,4};
    vector<int> v4 = {1,7,3,6};
    vector<int> v5 = {24};

    // vector<vector<int>> v;

    // v.push_back(v1);
    // v.push_back(v2);
    // v.push_back(v3);
    // v.push_back(v4);
    // v.push_back(v5);

    vector<vector<int>> v = {v1, v2, v3, v4, v5};

    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}