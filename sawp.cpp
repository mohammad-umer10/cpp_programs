#include<iostream>
using namespace std;

int main(){

cout <<"-----sawping with the third varabile-----"<<endl;

    int a = 10;
    int b = 11;
    int temp;
    temp = a; 
    a = b;
    b = temp;
    cout << a <<endl;
    cout << b <<endl;

cout <<"-----sawping without the third varabile-----"<<endl;

    int y = 10;
    int z = 11;

    y = y + z; /*30*/
    z = y - z; /*20*/
    y = y - z; /*10*/

    cout << y <<endl;
    cout << z;
    
return 0;
}