#include<iostream>
using namespace std;

int main(){

int a;
cout << "Enter the age: ";
cin>>a;

if (a >= 18){
    cout << "You can vote";
}
else {
    cout << "They're old enough to vote";
}

return 0;
}