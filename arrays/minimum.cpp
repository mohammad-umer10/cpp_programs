#include<iostream>
using namespace std;

int main(){

    int items[5] = {55,77,22,11,37};
    int minimum = items[0];

    for (int i = 0; i <= 4; i++){
        if (minimum > items[i]){
            minimum = items[i];
        }
    }
cout <<minimum;

return 0;
}