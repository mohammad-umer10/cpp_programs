#include<iostream>
#include<cmath>
using namespace std;

int main(){

float area, radius;

cout << "Enter the radius: ";
cin>>radius;

area = M_PI * radius * radius;

cout <<"The area of circle is: "<<area;

return 0;
}