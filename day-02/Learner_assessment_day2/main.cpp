#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Q2: Two named constants [2 Marks]
    const double VAT_RATE = 0.15;
    const double GRAMS_PER_KG = 1000.0;

    // Q3: Suitable types with reason [2 Marks]
    // Declaration separate from initialization
    int totalGrams;         // int: grams are whole numbers
    double pricePerKg;      // double: price has cents e.g. 89.99
    double kilograms;       // double: kg can have decimals e.g. 1.5
    double costBeforeVAT;   // double: money needs decimals
    double totalCost;       // double: money needs decimals

    // Q4: Prompts and input [2 Marks]
    cout << "Enter total grams of braai pack: ";
    cin >> totalGrams;
    cout << "Enter price per kg in Rands: ";
    cin >> pricePerKg;

    // Q5: Kilograms WITHOUT int division [3 Marks] - C2
    // Q8: Fixed int error [4 Marks] - C3
    // Using static_cast to avoid int division
    kilograms = static_cast<double>(totalGrams) / GRAMS_PER_KG;

    // Q6: Cost and VAT included [3 Marks] - C2
    costBeforeVAT = kilograms * pricePerKg;
    totalCost = costBeforeVAT * (1 + VAT_RATE);

    // Q7: Formatted, labelled output [2 Marks] - C2
    cout << fixed << setprecision(2);
    cout << "--- TVET Student Braai Slip ---" << endl;
    cout << "Kilograms: " << kilograms << " kg" << endl;
    cout << "Cost before VAT: R" << costBeforeVAT << endl;
    cout << "Total with VAT: R" << totalCost << endl;

    return 0; // Q1: Headers, main, return [2 Marks]
}
