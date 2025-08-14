#include<iostream>
using namespace std;

int main(){

int sum = 0;

    int nums[5] = {45, 6, 30, 4, 55};

    for (int i = 0; i <= 4; i++){
        cout << nums[i]<<endl;
        sum = sum + nums[i];
    }
    cout <<"The sum of the all number: "<<sum;

return 0;
}