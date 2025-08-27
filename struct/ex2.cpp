#include<iostream>
using namespace std;

int main(){

    struct
    {
    string brand;
    string modal;
    int year;
    }myCar1, myCar2;

    myCar1.brand = "BMW";
    myCar1.modal = "X5";
    myCar1.year = 2001;

    myCar2.brand = "ford";
    myCar2.modal = "mustang";
    myCar2.year = 2004;

    cout <<"Brand name"<<" "<<myCar1.brand<<" "<<"Modal name"<<" "<<myCar1.modal<<" "<<"Year"<<" "<<myCar1.year<<endl;
    cout <<"Brand name"<<" "<<myCar2.brand<<" "<<"Modal name"<<" "<<myCar2.modal<<" "<<"Year"<<" "<<myCar2.year<<endl;
    
return 0;
}