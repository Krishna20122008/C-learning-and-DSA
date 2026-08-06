#include<iostream>
using namespace std;
int main(){
    // int grr[][4] = {{2,4,5,2}, {4,6,3,4}, {5,7,2,1}};
    // for (int j=0; j<4; j++){
    //     for(int i=0; i<3; i++){
    //         cout << arr[i][j] << " ";       // Its like printing the transpose of the matrix
    //     }
    //     cout << endl;
    // }

    //another method:

    int grr[][4] = {{2,4,5,2}, {4,6,3,4}, {5,7,2,1}, {2,7,0,1}};
    for(int i = 0; i<4; i++){
        for(int j=0; j<i; j++){
            swap(grr[i][j], grr[j][i]);
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << grr[i][j] << " ";
        }
        cout << endl;
    }
}