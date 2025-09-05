#include<iostream>
using namespace std;

   bool isEven (int e){
    if (e % 2 == 0){
        return true;
    }
    else if (e % 2 == 1){
        return false;
    }
    }

int main(){
 
    cout<<"Enter is even or odd"<<" "<<isEven(5);

    return 0;
}