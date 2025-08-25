#include<iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter the year: ";
    cin>>a;
    if (a % 4 == 0){
        cout<<"its leap year";
    }
    else {
        cout<<"its not leap year";
    }

return 0;
}