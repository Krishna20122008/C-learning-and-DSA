#include<iostream>
using namespace std;

int fun(int x){
    cout<< "Hello" << endl;
}
int fun(double x){
    cout<< "Hi" << endl;
}
int fun(char x){
    cout<< "Hola" << endl;
}

int main(){
    fun(4);
    fun(4.0);
    fun('A');
}