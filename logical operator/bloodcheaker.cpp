#include<iostream>
using namespace std;

int main(){

    int age;
    int wight;
    string blood_borne;

    cout <<"Enter the age: ";
    cin>>age;

    cout <<"Enter the wight: ";
    cin>>wight;

    cout <<"Enter the blood_brone: "; 
    cin>>blood_borne;

    if (age >= 18 && wight >= 50 && blood_borne == "no"){
        cout << "you are eligible";
    }
    else{
        cout << "you are not eligible";
    }

return 0;
}