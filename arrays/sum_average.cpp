#include<iostream>
using namespace std;

int main(){

    int sum = 0;
    int average = 0;

    int nums[5] = {40, 50, 60, 70, 80};

    for(int i = 0; i <= 4; i++){
    cout <<nums[i]<<endl;
    sum = sum + nums[i];
    average = sum / 5;
    }

    cout <<"The sum of the all number: "<<sum<<endl;
    cout <<"The average of the all number: "<<average<<endl;

return 0;
}   