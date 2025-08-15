#include<iostream>
using namespace std;

int main(){
    
int y, z;

cout << "Enter the first number: ";
cin>>y;
cout << "Enter the second number: ";
cin>>z;

if (y > z){
    cout<<"First number is greater";
}
else if (y < z){
    cout <<"Second number is greater";
}
else if (y = z){
    cout<<"They both are equal";
}

return 0;
}