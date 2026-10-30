#include <iostream>
using namespace std;
int main() {
double hours, rate;
cout << "Enter hours worked: ";
cin >> hours;
cout << "Enter hourly rate: ";
cin >> rate;
double wage = hours * rate;
if (hours > 40) {
wage = wage + (hours - 40) * rate * 0.5;
}
cout << "Wage: R" << wage << endl;
return 0;
}
