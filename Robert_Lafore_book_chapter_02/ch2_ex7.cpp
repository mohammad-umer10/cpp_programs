#include<iostream>
using namespace std;

int main(){

    // You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying
    // by 9/5 and adding 32. Write a program that allows the user to enter a floating-point num
    // ber representing degrees Celsius, and then displays the corresponding degrees
    // Fahrenheit.

    float degrees_fahrenheit, degrees_Celsius;

    cout<<"Enter the degrees_celsius: ";
    cin>>degrees_Celsius;

    degrees_fahrenheit = (degrees_Celsius * 9/5) + 32;
    cout<<"the degrees_fehrenheit is "<<degrees_fahrenheit;
    
return 0;
}