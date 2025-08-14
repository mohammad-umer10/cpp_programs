#include<iostream>
using namespace std;

int main(){

    int items[5] = {55,77,22,11,37};
    int maximum = items[0];

    for (int i = 0; i <= 4; i++){
        if (maximum < items[i]){
            maximum = items[i];
        }
    }
cout <<maximum<<endl;

    //another sintax

    for (int i = 0; i <= 4; i++){
        maximum = max(maximum, items[i]);
    }
cout <<maximum;

return 0;
}