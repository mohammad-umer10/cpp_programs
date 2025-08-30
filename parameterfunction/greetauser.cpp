#include<iostream>
using namespace std;

    string greetUser(string firstname, string secondname){
    return "Hello " + firstname + " " + secondname; 
    }

int main(){

    string firstname, secondname;
    cout<<"Enter your first name: ";

    cin>>firstname;
    cout<<"Enter your second name: ";

    cin>>secondname;
    cout<<greetUser(firstname, secondname);

    return 0;
}
