#include<iostream>
using namespace std;

    void printmessage(string message, int a){
    for (int i = 1; i<=a; i++){
        cout<<message<<endl;
    }
    }

int main(){

    printmessage("Mohammad Umer", 5);

    return 0;
}