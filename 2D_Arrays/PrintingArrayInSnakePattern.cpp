#include<iostream>
using namespace std;
int main(){
    int arr[][5] = {{2,4,5,2,3}, {4,6,3,4,7}, {5,7,2,1,9}, {1,2,0,7,4}};
    for (int i=0; i<4; i++){
        if (i%2==0){
            for(int j=0; j<5; j++){
                cout << arr[i][j] << " ";
            }
        }
        else {
            for(int j=4; j>=0; j--){
                cout << arr[i][j] << " ";
            }
        }
        
    }
}