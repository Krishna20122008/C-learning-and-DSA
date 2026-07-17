#include<iostream>
using namespace std;

int factorial(int a){
    int fact = 1;
    for (; a>=1; a--){
        if (a==0) return fact;
        
        else (fact*=a);
    }
    return fact;
}

float ncr(int n, int r){
    return (factorial(n) / (factorial(r)*(factorial(n-r))));
}

float npr(int a, int b){
    return (factorial(a)/factorial(a-b));    
}


int main(){
    cout << ncr(6,4) << endl;
    cout << factorial(6) << endl;
    cout << npr(4,2);
}