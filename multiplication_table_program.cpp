#include<iostream>
using namespace std;

int main(){
    
int first_number;

cout << "Enter the number what table you want: ";
cin>>first_number;

for (int i = 1; i <=10; i++){
    cout << first_number<<" "<<"x"<<" "<<i<<" "<<"="<<" "<< first_number * i<<endl;
}

return 0;
}