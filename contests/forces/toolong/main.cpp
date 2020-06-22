#include <iostream>

using namespace std;

int main () {

    int n;
    
    cin >> n;

    for(int i = 0; i < n; i++) {
        string a; 
        cin >> a;
        a.length() > 10 ? cout << a[0] << a.length() -2 << a[a.length()-1] << endl : cout << a << endl;
    }

    return 0;
}