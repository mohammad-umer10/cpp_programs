#include<iostream>
using namespace std;

    string twoequalno (int a, int b){
        if (a == b ){
            return "equal";
        }
        else {
            return "notequal";
        }
}

int main(){

    cout << twoequalno(4, 4);
    
    return 0;
}