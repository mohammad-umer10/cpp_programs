#include <iostream>
using namespace std;
class Student {
public:
    string name;

    void display() {
        cout << "Student Name: " << name << endl;
    }
};
int main() {
    Student s1;   // object 1
    Student s2;   // object 2
    s1.name = "Umer";
    s2.name = "Ali";
    s1.display();
    s2.display();
    return 0;
}