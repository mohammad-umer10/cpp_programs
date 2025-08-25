#include<iostream>
using namespace std;

int main(){

    int z;
    cout<<"Enter the number: ";
    cin>>z;
    if (z >= 10 && z <= 100){
        cout<<"inclusive";
    }
    else{
        cout<<"exclusive";
    }

return 0;
}