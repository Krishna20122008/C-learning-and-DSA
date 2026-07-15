#include <iostream>
using namespace std;

// int minimum(){       // Easier method
//         int a;
//         int b;
//         cout << "Enter two numbers to find minimum of those: ";
//         cin >> a >> b;

//         cout << "Min number: " << min(a,b) << endl;
//     }

int minimum(int a, int b){          // Basic method for those who don't know min() fn.
    if (a<b) cout << "Minimum is: " << a << endl;
    else if (a>b) cout << "Minimum is: " << b << endl;
    else cout << "Both are same" << endl;
}
int main(){
    minimum(2,4);
}