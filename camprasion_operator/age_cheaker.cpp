#include<iostream>
using namespace std;

int main(){

int age;

cout << "Enter your age: ";
cin>>age;

if (age <= 12)
{
    cout <<"You are a child";
}
else if(age <= 19)
{
    cout <<"You are in teenagers";
}
else if(age <= 60)
{
    cout <<"You are an adults";
}
else if(age >= 60)
{
    cout <<"You are in seniors";
}

return 0;
}