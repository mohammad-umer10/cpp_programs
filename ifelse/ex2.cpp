#include<iostream>
using namespace std;

int main(){

    int a;
    cout<<"enter the number is positive, negative, or zero: ";
    cin>>a;

    if (a > 0){
        cout<<"positive";
    }
    else if(a < 0){
        cout<<"nagative";
    }
    else{
        cout<<"zero";
    }
    
return 0;
}