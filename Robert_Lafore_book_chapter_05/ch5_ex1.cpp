#include<iostream>
#include<cmath>
using namespace std;

    // Refer to the CIRCAREA program in Chapter 2, “C++ Programming Basics.” 
    // Write a function called circarea() that finds the area of a circle in a similar way.
    // It should take an argument of type float and return an argument of the same type.
    // Write a main() function that gets a radius value from the user, calls circarea(), and displays the result.

    float circarea(float radius){
        return M_PI * radius * radius;
    }

int main(){


    float radius;
    cout <<"Enter the number that you should take area: ";
    cin >>radius;

    float ans = circarea(radius);
    cout <<ans;

return 0;
}