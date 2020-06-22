#include <iostream>
#include <string>

using namespace std;

int main() {
    int a;
    cin >> a;

    (a % 2 == 0 && a > 2) ?  cout << "YES" : cout << "NO";
}