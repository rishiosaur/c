// The string library is included in iostream
#include <iostream>
using namespace std;

int main () {

    // Strings are enclosed in double quotes
    // string a = "Hello World!";

    // cout << a << endl;

    // Carriage return characters are the same as in JS
    string escaped = "Hello \"World\"!";

    cout << escaped << endl;

    // length is a function on a string
    cout << escaped.length() << endl;

    // Errors + string manip
    int i = 3;
    cout << to_string(i).length() << endl;

    string e = "3";

    int q = stoi(e);
    float z = stof(e);

    cout << q << " " << z << endl;

    string a = 6.0;
cout << a.length() + 2 << endl;

    return 0;
}