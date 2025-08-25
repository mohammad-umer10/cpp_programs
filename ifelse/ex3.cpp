#include<iostream>
using namespace std;

int main(){

    int a; 
    cout<< "Enter the age: ";
    cin>>a;

    if (a >= 18){
        cout<<"Eligible to vote";
    }
    else if (a < 18){
        cout<<"Not eligible to vote";
    }

return 0;
}