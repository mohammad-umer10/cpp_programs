#include<iostream>
using namespace std;
   
int main(){

    int repeat;
    char op;
    double first_number, second_number;

    cout << " ------ CALCULATOR -----! "<<endl;
    
    do
    {
        cout << "Enter the first number: ";
        cin >> first_number;
        cout << "Write the opeater sign: ";
        cin >> op;
        cout << "Enter the second number: ";
        cin >> second_number;

        switch (op)
        {
        case '+':

            cout << "The sum of the no: "<<first_number << " " <<op << " " <<second_number <<endl;
            cout << '=' <<" " << first_number + second_number <<endl;
            break;

        case '-':

            cout << "The subtraction of the no: "<<first_number << " " <<op << " " <<second_number <<endl;
            cout << '=' <<" " << first_number - second_number <<endl;
            break;

        case '*':

            cout << "The multiplication of the no: "<<first_number << " " <<op << " " <<second_number <<endl;
            cout << '=' <<" " << first_number * second_number <<endl;
            break;

        case '/':

            cout << "The division of the no: "<<first_number << " " <<op << " " <<second_number <<endl;
            cout << '='<<" " << first_number / second_number <<endl;
            break;
        
        default:

            cout << " Invalid, try again "<<endl;
            break;
        }

            cout<<"If you want to continue calculator press 1: "<<endl;
            cout<<"To Exit press 2: "<<endl;
            cin>>repeat;

            }while (repeat == 1);
    
return 0;
}

