#include<iostream>
using namespace std;
int main(){

    int x = 10;
    cout << x << endl;

    x++ ;    // x++ is same as x = x+1
    cout << x << endl;

    ++x ;    // ++x is same as x = x+1
    cout << x << endl;

    x-- ;    // x-- is same as x = x-1
    cout << x << endl;

    --x ;    // x-- is same as x = x-1
    cout << x << endl;

    int y =10;
    cout << y << endl;
    cout << y++ << endl;    // here, its postfix so, after y is printed, then addition is done.
    cout << ++y << endl;    // here, its prefix so, before y is printed, addition is done earlier.
    
}