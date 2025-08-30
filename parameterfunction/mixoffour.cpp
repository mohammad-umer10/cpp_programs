#include<iostream>
using namespace std;

    int maxFunction (int a, int b, int c, int d){
        if(a > b && a > c && a > d){
            return a;
        }
        else if( b > a && b > c && b > d){
            return b;
        }
        else if (c > a && c > b && c > d){
            return c;
        }
        else {
            return d;
        }
}

int main(){

    cout<<maxFunction(9, 35, 79, 25);
    
    return 0;
}