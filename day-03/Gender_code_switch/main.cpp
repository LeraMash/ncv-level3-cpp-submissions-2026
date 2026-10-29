
#include <iostream>
using namespace std;

int main() {
    char gender;

    cout << "Enter gender (F, M or N): ";
    cin >> gender;

    switch (gender) {
        case 'F':
        case 'f':
            cout << "Female";
            break;

        case 'M':
        case 'm':
            cout << "Male";
            break;

        case 'N':
        case 'n':
            cout << "N/A - Not Applicable";
            break;

        default:
            cout << "Invalid code";
    }

    return 0;
}

