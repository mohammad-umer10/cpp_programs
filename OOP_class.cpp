#include <iostream>
using namespace std;

class Student {
public:
    string name;
    void display() {
        cout <<"Student Name: "<< name;
    }
};

int main() {
    Student s1;
    s1.name = "Umer";
    s1.display();
    return 0;
}