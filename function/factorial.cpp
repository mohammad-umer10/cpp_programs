#include<iostream>
using namespace std;

    int factorial(int a) {
    if (a == 0 || a == 1){
        return 1;
    }
    else {
        return a * factorial(a - 1);
    }
    }

int main(){

    int result = factorial(5);
    cout<<"the result of the factorial is: "<<result<<endl;
  
 return 0;
}