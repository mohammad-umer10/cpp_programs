#include<iostream>
using namespace std;

string email;
string password;
void login_program(){
    cout<<"Enter your email: ";
    cin>>email;
    cout << "Enter the password: ";
    cin>>password;
}

int main(){

    string Email = "mohammadumerabbasi10@gmail.com";
    string Password = "123456";

    bool login_system = true;

    login_program();

    while (login_system)
    {
    if (email == Email && password == Password){
        cout<<"You are entered in the login system";
        login_system = false;
    }
    else {
        cout << "Your email or password is incorrect, Try again"<<endl;
        login_program();
    }
    }

return 0;
}