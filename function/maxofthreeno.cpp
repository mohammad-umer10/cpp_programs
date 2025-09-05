#include<iostream>
using namespace std;

   int maxOfThree(int a, int b, int c){
     if (a > b && a > c){
        return a;
    } 
    else if (b > a && b > c){
        return b;
    }  
    else if (c > a && c > b){
        return c;
        } 
    }

int main(){

    cout<<"Enter the greater number"<<" "<<maxOfThree(3, 4, 7)<<endl;

    return 0;
}
