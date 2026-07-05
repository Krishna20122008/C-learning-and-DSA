#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factors are: " << endl;
    // for (int i=1; i<=n; i++){            // In this code, so many iterations are there.
    //     if (n%i==0) cout << i << endl;   // Actually, for factors of 50, 50/1, 50/2 are also factors so we don't need to go till the number n
    // }                                    // We can actually just go till sqrt(n) and the iterations will reduce significantly.

    for (int i=1; i<=sqrt(n); i++){
        if (n%i==0) cout << i << endl << (n/i) << endl;
    }
}