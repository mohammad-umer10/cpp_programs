#include<iostream>
using namespace std;

int main(){

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
    cout<<endl;
    }

    // bottom loop

    for (int i = n-1; i >= 1; i--)
    {
    for (int j = n; j >= i; j--)
    {
        cout <<" ";
    }
    for (int k = 1; k <= i; k++)
    {
        cout <<"l ";
    }
    cout<<endl;
    }

//pyramid angle in numbers.

    int num = 1;

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
    cout<<endl;
    }

    // bottom loop

    for (int i = n-1; i >= 1; i--)
    {
    for (int j = n; j >= i; j--)
    {
        cout <<" ";
    }
    for (int k = 1; k <= i; k++)
    {
        cout <<num++;
    }
    cout<<endl;
    }
return 0;
}