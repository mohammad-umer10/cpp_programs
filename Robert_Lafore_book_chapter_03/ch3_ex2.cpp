#include<iostream>
using namespace std;

    // Write a temperature-conversion program that gives the user the option of converting
    // Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use 
    // floating-point numbers. Interaction with the program might look like this:
    // Type 1 to convert Fahrenheit to Celsius,
    // 2 to convert Celsius to Fahrenheit: 1
    // Enter temperature in Fahrenheit: 70
    // In Celsius that’s 21.111111

int main(){

    float fahrenheit, Celsius;
    int temperature;

    cout<<"press 1 to convert Fahrenheit to Celsius: \n";
    cout<<"press 2 to convert Celsius to Fahrenheit: "<<endl;
    cin>>temperature;

    switch (temperature)
    {
    case 1:
        cout <<"Enter the fahrenheit: ";
        cin>>fahrenheit;
        Celsius = (fahrenheit - 32) * 5/9;
        cout<<"The Celsius is: "<<Celsius;
        break;
    case 2:
        cout <<"Enter the celsius: ";
        cin>>Celsius;
        fahrenheit = (Celsius * 9/5) + 32;
        cout<<"The fahrenheit is: "<<fahrenheit;
        break;
    default:
        cout<<"Invalid";
        break;
    }
    
return 0;
}
