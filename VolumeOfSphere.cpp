#include<iostream>
using namespace std;
int main(){

    float radius;
    cout << "Enter the value of radius: ";
    cin >> radius;

    float volume = (4*3.14*radius*radius*radius)/3;
    
    cout << "The volume of sphere is: " << volume <<endl;

}