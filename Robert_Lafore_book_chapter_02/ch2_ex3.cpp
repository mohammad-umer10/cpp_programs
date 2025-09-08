#include<iostream>
using namespace std;

int main(){

//  Write a program that generates the following output:
//  10
//  20
//  19
//  Use an integer constant for the 10,an arithmetic assignment operator to generate the 20,
//  and a decrement operator to generate the 19.\

    const int a = 10;
    int b = 10;

    cout <<a<<endl;

    b+=a;
    cout <<b<<endl;
    --b;
    
    cout<<b<<endl;

    return 0;
}