#include<iostream>
using namespace std;
int main(){
    
    int a;
    cout << "Enter the length: " ;
    cin >> a;

    int b;
    cout << "Enter the breadth: " ;
    cin >> b;

    for (int i=1; i<=a; i++){
        if (i==1 || i==a){
            for (int j=1; j<=b; j++){
                cout << "* " ;
            }
            cout << endl;
        }
        else{
            for (int j=1; j<=b; j++){
                if (j==1 or j==b){
                    cout << "* " ;
                }
                else{
                    cout << "  " ;
                }
            }
            cout << endl;
        }
    }
}