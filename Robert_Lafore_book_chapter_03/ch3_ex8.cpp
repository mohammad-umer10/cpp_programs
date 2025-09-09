#include<iostream>
using namespace std;

    //  Create a four-function calculator for fractions. (See Exercise 9 in Chapter 2, and
    //  Exercise 4 in this chapter.) Here are the formulas for the four arithmetic operations
    //  applied to fractions:
    //  Addition:
    //  Subtraction:
    //  Multiplication:
    //  Division:
    //  a/b + c/d = (a*d + b*c) / (b*d)
    //  a/b - c/d = (a*d - b*c) / (b*d)
    //  a/b * c/d = (a*c) / (b*d)
    //  a/b / c/d = (a*d) / (b*c)
    //  The user should type the first fraction, an operator, and a second fraction. The program
    //  should then display the result and ask whether the user wants to continue.

int main(){

    char repeat;
    char op, slash;
    float a, b, c, d;

    do
    {
        cout <<"Enter the first fraction, operator, second fraction: ";
        cin>>a>>slash>>b>>op>>c>>slash>>d;
        
    switch (op)
    {
        case '+':
            cout <<"The addition of two fraction is: "<<(a*d + b*c)<<slash<<(b*d)<<endl;
        break;
        case '-':
            cout <<"The subraction of two fraction is: "<<(a*d - b*c)<<slash<<(b*d)<<endl;
        break;
        case '*':
            cout <<"The multiplying of two fraction is: "<<(a*c)<<slash<<(b*d)<<endl;
        break;
        case '/':
            cout <<"The dividing of two fraction is: "<<(a*d)<<slash<<(b*c)<<endl;
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