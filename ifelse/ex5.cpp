#include<iostream>
using namespace std;

int main(){

    int a, b, c;
    cout<<"Enter the first number: ";
    cin>>a;

    cout<<"Enter the second number: ";
    cin>>b;

    cout<<"Enter the second number: ";
    cin>>c;

    if (a > b && a > c ){
        cout<<a;
    }
    else if(b > a && b > c){
        cout<<b;
    }
    else {
        cout<<c;
    }

return 0;
}