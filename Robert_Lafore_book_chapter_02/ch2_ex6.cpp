#include<iostream>
using namespace std;

int main(){

// On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
// $0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.
// Write a program that allows the user to enter an amount in dollars, and then displays this
// value converted to these four other monetary units.

    float british_pound = 1.487;
    float french_franc = 0.172;
    float german_deutschemark = 0.584;
    float Japanese_yen = 0.00955;
    float dallor;
    char dallor_sigh = '$';
    float a, b, c, d;

    cout <<"Enter an amount of dollars: ";
    cin>>dallor>>dallor_sigh;

    a = british_pound * dallor;
    cout <<"This british_pound converted: "<<a<<dallor_sigh<<endl;

    b = french_franc * dallor;
    cout <<"This french_franc converted: "<<b<<dallor_sigh<<endl;

    c = german_deutschemark * dallor;
    cout <<"This german_deutschemark converted: "<<c<<dallor_sigh<<endl;

    d = Japanese_yen * dallor;
    cout <<"This Japanese_yen converted: "<<d<<dallor_sigh<<endl;

return 0;
}