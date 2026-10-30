#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    string item;
    double price;
    cout << "Enter item: ";
    getline(cin, item);
    cout << "Enter price: ";
    cin >> price;
    cout << fixed << setprecision(2);
    cout << "--- RECEIPT ---" << endl;
    cout << "Item: " << item << endl;
    cout << "Price: R" << price << endl;
    return 0;
}

