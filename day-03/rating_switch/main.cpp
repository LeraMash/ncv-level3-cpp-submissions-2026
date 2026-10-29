#include <iostream>
using namespace std;
int main() {
    int rating;
    cout << "Rate lecturer 1-5: ";
    cin >> rating;

    switch(rating) {
        case 1: cout << "Poor"; break;
        case 2: cout << "Fair"; break;
        case 3: cout << "Good"; break;
        case 4: cout << "Very Good"; break;
        case 5: cout << "Excellent"; break;
        default: cout << "Invalid - must be 1-5";
    }
    return 0;
}
