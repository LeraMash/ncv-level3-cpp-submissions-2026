#include <iostream>
#include <limits>
using namespace std;
int main() {
    int num;
    cout << "Enter a whole number: ";
    cin >> num;

    // Error 1: User types letter e.g. 'abc'
    // Error 2: User types decimal e.g. '12.5'
    if(cin.fail()) {
        cout << "Input error - not a valid integer" << endl;
        cin.clear(); // clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // throw away bad input
    } else {
        cout << "You entered: " << num << endl;
    }
    return 0;
}
