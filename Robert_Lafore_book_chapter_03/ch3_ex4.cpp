#include<iostream>
using namespace std;

    //  Create the equivalent of a four-function calculator. The program should ask the user to
    //  enter a number, an operator, and another number. (Use floating point.) It should then
    //  carry out the specified arithmetical operation: adding, subtracting, multiplying, or divid
    //  ing the two numbers. Use a switch statement to select the operation. Finally, display the
    //  result.
    //  When it finishes the calculation, the program should ask whether the user wants to do
    //  another calculation. The response can be ‘y’ or ‘n’. Some sample interaction with the
    //  program might look like this:
    //  Enter first number, operator, second number: 10 / 3
    //  Answer = 3.333333
    //  Do another (y/n)? y
    //  Enter first number, operator, second number: 12 + 100
    //  Answer = 112
    //  Do another (y/n)? n

int main(){

    char repeat;
    char op;
    float a, b;

    do
    {
        cout <<"Enter the number, operator, second number: ";
        cin>>a>>op>>b;

    switch (op)
    {
        case '+':
            cout <<"The sum of two number is: "<<a + b<<endl;
        break;
        case '-':
            cout <<"The subtracting of two number is: "<<a -b<<endl;
        break;
        case '*':
            cout <<"The multiplying of two number is: "<<a * b<<endl;
        break;
        case '/':
            cout <<"The dividing of two number is: "<<a / b<<endl;
        break;
        default:
            cout <<"invalid";
        break;
    }

    cout << "Do another calculation (y/n): ";
    cin>>repeat;

    } while (repeat == 'y');

return 0;
}