#include <iostream>
using namespace std;


void input(int &a, int &b);
void sum(int a, int b);
void difference(int a, int b);
void product(int a, int b);
void quotient(int a, int b);

int main()
{
    int a, b;

    input(a, b);
    sum(a, b);
    difference(a, b);
    product(a, b);
    quotient(a, b);

    return 0;
}


void input(int &a, int &b)
{
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;
}


void sum(int a, int b)
{
    cout << "Sum = " << a + b << endl;
}


void difference(int a, int b)
{
    cout << "Difference = " << a - b << endl;
}


void product(int a, int b)
{
    cout << "Product = " << a * b << endl;
}


void quotient(int a, int b)
{
    if (b != 0)
    {
        cout << "Quotient = " << (double)a / b << endl;
    }
    else
    {
        cout << "Cannot divide by zero" << endl;
    }
}
