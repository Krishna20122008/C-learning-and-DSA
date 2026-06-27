#include<iostream>
using namespace std;
int main(){
    float length;
    cout << "Enter length of rectangle: ";
    cin >> length;

    float breadth;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    float area = length*breadth;
    float perimeter = 2*(length+breadth);

    if (area>perimeter) cout << "The area is greater than perimeter..";
    else if (area==perimeter) cout << "Area is equal to perimeter";
    else cout << "Area is less than perimeter";
}