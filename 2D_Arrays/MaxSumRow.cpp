#include<iostream>
using namespace std;
int main(){
    int arr[][4] = {{2,4,5,2}, {4,6,3,4}, {5,7,2,1}};
    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;

    for(int i=0; i<1; i++){
        for (int j=0; j<4; j++){
            sum1+=arr[i][j];
        }
    }
    if (sum<sum1){
        sum = sum1;
    }
    for(int i=1; i<2; i++){
        for (int j=0; j<4; j++){
            sum2+=arr[i][j];
        }
    }
    if (sum<sum2){
        sum = sum2;
    }
    for(int i=2; i<3; i++){
        for (int j=0; j<4; j++){
            sum3+=arr[i][j];
        }
    }
    if (sum<sum3){
        sum = sum3;
    }

    cout << sum << endl;
}