#include <iostream>
#include <string>
using namespace std;

int main() {
    // String mutability example
    string a = "Alex";
    string &b = a; // b references to a, b is an alias or just another name of a
    cout << a << endl; // Alex
    cout << b << endl; // Alex
    b.insert(1,"p"); // since b is a, we're also modifying
    cout << a << endl; // Aplex
}