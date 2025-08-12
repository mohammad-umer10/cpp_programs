#include<iostream>
using namespace std;

int main(){

double ferhenhit, celsius;

    cout << "Enter the fahrenheit: ";
    cin>>ferhenhit;

    celsius = (ferhenhit - 32) * 5/9;
    cout << "The celsius is: "<<celsius;
    

return 0;
}