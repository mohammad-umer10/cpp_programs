#include<iostream>
using namespace std;

int main(){
    int num =1;
    int n;
    cout <<"Enter the number: ";
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
    for (int j = n; j >= i; j--)
    {
        cout <<" ";
    }
    for (int k = 1; k <= i; k++)
    {
        cout <<"l ";
    }
    cout <<endl;
    }

// pyramid tringle in number.

    for (int i = 1; i <=n; i++)
    {
    for (int j = n; j >= i; j--)
    {
        cout <<" ";
    }
    for (int k = 1; k <= i; k++)
    {
        cout <<num++<<" ";
    }
    cout <<endl;
    }

return 0;
}