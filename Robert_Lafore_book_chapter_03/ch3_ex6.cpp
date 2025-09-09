#include<iostream>
using namespace std;

//  Modify the FACTOR program in this chapter so that it repeatedly asks for a number and
//  calculates its factorial, until the user enters 0, at which point it terminates. You can
//  enclose the relevant statements in FACTOR in a while loop or a do loop to achieve this
//  effect.

int main(){

    int a = 0;
    int factor_progrm = 1;

    cout <<"Enter the number to take the factorial of that: ";
    cin>>a;

    for (int i = a; i>0; i--)
    {
        factor_progrm = factor_progrm * i;
    }

    cout <<factor_progrm;

return 0;
}