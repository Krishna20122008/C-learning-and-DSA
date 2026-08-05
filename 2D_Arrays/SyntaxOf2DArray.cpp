#include<iostream>
using namespace std;
int main(){
    int arr[][4] = {{2,4,5,2}, {4,6,3,4}, {5,7,2,1}};
    for (int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";       // Its like printing a matrix
        }
        cout << endl;
    }
    cout << endl;

    int grr[][4] = {{2,4,5,2}, {4,6,3,4}, {5,7,2,1}};
    for (int j=0; j<4; j++){
        for(int i=0; i<3; i++){
            cout << arr[i][j] << " ";       // Its like printing the transpose of the matrix
        }
        cout << endl;
    }
}