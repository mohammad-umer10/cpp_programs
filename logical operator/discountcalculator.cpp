#include<iostream>
using namespace std;

int main(){

    int age;
    int purchase;
    int final_amount;
    string member_ship_card;
    const int discount_value = 10;

    cout << "Enter the age: ";
    cin>>age;

    cout << "Enter the purchase: ";
    cin>>purchase;

    cout << "Enter the member_ship_card (yes, no): ";
    cin>>member_ship_card;

    if (age > 60 && purchase > 50 && member_ship_card == "yes"){
        final_amount << purchase - discount_value;
        cout << "Prise after 10 persent discount: "<<final_amount;
    }
    else{
        cout << "Price without discount: "<<purchase;
    }

return 0;
}