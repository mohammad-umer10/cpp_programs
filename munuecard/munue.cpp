#include<iostream>
using namespace std;

    void dislplayMenue(){
        cout << "1. Zinger buger          Rs: 250"<<endl;
        cout << "2. Zinger Roll           Rs: 150"<<endl;
        cout << "3. Boti Roll             Rs: 120"<<endl;
        cout << "4. pepsi                 Rs: 100"<<endl;
        cout << "5. Chicken tikka         Rs: 350"<<endl;
        cout<<endl;
    }

int main(){

    int sum = 0;

    int a;
    bool menuList = true;

    cout << "-----MENUE LIST-----"<<endl;
    dislplayMenue(); 
    
    cout << "Select which one you want: ";
    cin>>a;
    
    while (menuList)
    {
        switch (a)
        {
        case 1:
            cout<<"1. Zinger buger          Rs: 250"<<endl;
            sum = sum + 250;
            cout<<"If you want to continue press 6: "<<endl;
            cout<<"To Exit press 7: "<<endl;
            cin>>a;
            break;
        case 2:
            cout<<"2. Zinger Roll           Rs: 150"<<endl;
            sum = sum + 150;
            cout<<"If you want to continue press 6: "<<endl;
            cout<<"To Exit press 7: "<<endl;
            cin>>a;
            break;
        case 3:
            cout<<"3. Boti Roll             Rs: 120"<<endl;
            sum = sum + 120;
            cout<<"If you want to continue press 6: "<<endl;
            cout<<"To Exit press 7: "<<endl;
            cin>>a;
            break;
        case 4:
            cout<<"4. pepsi                 Rs: 100"<<endl;
            sum = sum + 100;
            cout<<"If you want to continue press 6: "<<endl;
            cout<<"To Exit press 7: "<<endl;
            cin>>a;
            break;
        case 5:
            cout<<"5. Chicken tikka         Rs: 350"<<endl;
            sum = sum + 350;
            cout<<"If you want to continue press 6: "<<endl;
            cout<<"To Exit press 7: "<<endl;
            cin>>a;
            break;
        case 6:
            cout<<"You continue the menu list :"<<endl;
            dislplayMenue();
            cout << "Select which one you want: "<<endl;
            cin>>a;
            break;
        case 7:
            cout<<"There is the total: "<<sum<<endl;
            cout<<"Thanks sir, you Exit the menu list:"<<endl;
            menuList = false;
            break; 
        default:
            cout<<"Invalid number, try again"<<endl;
            dislplayMenue();
            cout << "Select which one you want: "<<endl;
            cin>>a;
            break;
        }
    }
    
return 0;
}