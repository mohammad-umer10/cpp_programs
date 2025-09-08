#include<iostream>
using namespace std;

int main(){

    // Assuming there are 7.481 gallons in a cubic foot,write a program that asks the user to
    // enter a number of gallons,and then displays the equivalent in cubic feet.

    float cubic_foot;
    float cubic_gallon = 7.418;

    cout<<"Enter cubic foot: ";
    cin>>cubic_foot;

    cubic_foot = cubic_foot * cubic_gallon;
    cout<<cubic_foot;

return 0;
}