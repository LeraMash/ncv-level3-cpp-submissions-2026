#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
const double VAT = 0.15;
string product;
double price;
int qty;
cout << "Enter product: ";
cin >> product;
cout << "Enter price: ";
cin >> price;
cout << "Enter quantity: ";
cin >> qty;
double total = price * qty;
double totalWithVAT = total * (1 + VAT);
cout << fixed << setprecision(2);
cout << "Total with VAT: R" << totalWithVAT << endl;
return 0;
}

