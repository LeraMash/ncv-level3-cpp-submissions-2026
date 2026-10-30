#include <iostream>
#include <string>
using namespace std;
int main() {
    int age;
    string name;
    cout << "Enter age: ";
    cin >> age;
    cin.ignore(); // FIX: clears Enter key, otherwise getline skips
    cout << "Enter full name: ";
    getline(cin, name);
    cout << "Hello " << name << " you are " << age << endl;
    return 0;
}

