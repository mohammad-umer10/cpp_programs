#include<iostream>
using namespace std;

int main(){

    int b;
    cout<<"Enter the number that print table: ";
    cin>>b;

    for (int a = 1; a <= 10; a++){
    cout<<b<<" "<<"x"<<" "<<a<<" "<<"="<<" "<<b * a<<endl;
    }

return 0;
}