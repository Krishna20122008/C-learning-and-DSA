#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> ans;
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for(int i = 1; i<=rows; i++){
        ans.push_back(vector<int>(i, 1));
    }

    for(int i = 2; i<ans.size(); i++){
        for(int j = 1; j<ans[i].size() -1; j++){
            ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
        }
    }

    for(int i = 0; i<ans.size(); i++){
        for(int j = 0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

}