#include<iostream>
using namespace std;

int main(){

cout << "------post incremant-----"<<endl;

int a = 5;
int b = a++;
cout << b <<endl;

cout << "------post decrement-----"<<endl;

int c = 5;
int d = c--;
cout << d <<endl;

cout << "-----pre incremant------"<<endl;

int e = 9;
cout << ++e <<endl;

cout << "-----pre decrement------"<<endl;

int f = 9;
cout << --f <<endl;

return 0;
}