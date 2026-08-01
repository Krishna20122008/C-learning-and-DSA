#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(5);
    arr[0] = 54;
    for (int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> grr(5, 3);      // in vectors (also called dynamic arrays), if we write any number after the size of array, the value is set to default value
    grr[0] = 43;
    for (int i=0; i<5; i++){
        cout << grr[i] << " ";
    }
    cout << endl;
}