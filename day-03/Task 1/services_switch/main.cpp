#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "1=ID 2=Passport 3=Birth Cert" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1: cout << "Go to counter A for ID" << endl; break;
        case 2: cout << "Go to counter B for Passport" << endl; break;
        case 3: cout << "Go to counter C for Birth Cert" << endl; break;
        default: cout << "Invalid service" << endl;
    }
    return 0;
}
