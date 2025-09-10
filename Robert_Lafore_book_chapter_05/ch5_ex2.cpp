#include <iostream>
using namespace std;

    // Raising a number n to a power p is the same as multiplying n by itself p times. Write a
    // function called power() that takes a double value for n and an int value for p, and
    // returns the result as a double value. Use a default argument of 2 for p, so that if this
    // argument is omitted, the number n will be squared. Write a main() function that gets values from the user to test this function.

    double power(double n, int p = 2) {
        double result = 1;
        for (int i = 0; i < p; i++) {
            result *= n;
        }
        return result;
    }

int main(){


    double number;
    int exponent;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter exponent (or 0 to use default exponent 2): ";
    cin >> exponent;

    if (exponent == 0) {
        cout << number << " squared is: " << power(number) << endl;
    } else {
        cout << number << " raised to the power " << exponent << " is: " << power(number, exponent) << endl;
    }

    return 0;
}
