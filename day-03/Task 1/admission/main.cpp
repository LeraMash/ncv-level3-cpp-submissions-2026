#include <iostream>
using namespace std;
int main() {
    int age, mark;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter final mark: ";
    cin >> mark;

    if (age >= 16 && age <= 30 && mark >= 50) {
        cout << "Admitted" << endl;
    } else {
        cout << "Not admitted" << endl;
    }
    return 0;
}
