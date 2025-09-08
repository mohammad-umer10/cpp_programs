#include<iostream>
#include <iomanip>
using namespace std;

int main(){

// When a value is smaller than a field specified with setw(), the unused locations are, by
// default, filled in with spaces. The manipulator setfill() takes a single character as an
// argument and causes this character to be substituted for spaces in the empty parts of a
// field. Rewrite the WIDTH program so that the characters on each line between the location
// name and the population number are filled in with periods instead of spaces, as in
//     Portcity.....2425785

cout <<"Pakistan"<<setfill('.')<<setw(15)<<2475000000;

return 0;
}