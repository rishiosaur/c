#include <iostream>
using namespace std;

int main () {
    // initialization of variables
    string name = "Rishi";

    // Checking that name exists
    cout << name << endl;

    // general assignment: <data_type> <name> = <value>
     

    // Variable name changing
    string x = "hi";

    // The value of x is copied into y
    string y = x;

    // The value of x is changed, but because x has no relationship to y, y is not changed.
    x = "Hello";

    cout << x << endl;
    cout << y << endl;

     


}
