#include<iostream>
using namespace std;

int main(){

    struct 
    {
    string myName;
    int myAge;
    char myGrade;
    }myFuctinon;

    myFuctinon.myName = "Umer Abbasi";
    myFuctinon.myAge = 16;
    myFuctinon.myGrade = 'A';

    cout <<"My name"<<" "<<myFuctinon.myName<<" "<<"My age"<<" "<<myFuctinon.myAge<<" "<<"My grade"<<" "<<myFuctinon.myGrade;

return 0;
}