#include<iostream>
using namespace std;

    //  Use for loops to construct a program that displays a pyramid of Xs on the screen. The
    //  pyramid should look like this
    //  X
    //  XXX
    //  XXXXX
    //  XXXXXXX
    //  XXXXXXXXX
    //  except that it should be 20 lines high, instead of the 5 lines shown here. One way to do
    //  this is to nest two inner loops, one to print spaces and one to print Xs, inside an outer
    //  loop that steps down the screen from line to line.

int main(){

    int n;
    cout <<"Enter the number :";
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        for (int j = n-1; j >= i; j--)
        {
            cout <<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout <<"x ";
        }
        cout <<endl;
    }
    cout <<endl;
    
return 0;
}
