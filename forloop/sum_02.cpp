#include<iostream>
using namespace std;

int main(){

    int sum =0;

    for  (int i = 0; i <= 20; i++){
        if (i % 2 == 0){
        sum = sum + i;   
        }
    }

    cout<<"The sum of the numbers: "<<sum<<endl;

return 0;
}