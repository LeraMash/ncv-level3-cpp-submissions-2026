
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototypes
int sum(int a, int b);
int diff(int a, int b);
int product(int a, int b);
double divide(double a, double b);

int main()
{
    int a, b;
    char op;

    srand(time(0));

    // Generate random numbers
    a = rand() % 50 + 1;
    b = rand() % 50 + 1;

    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
        case '+':
            cout << "Sum = " << sum(a, b);
            break;

        case '-':
            cout << "Difference = " << diff(a, b);
            break;

        case '*':
            cout << "Product = " << product(a, b);
            break;

        case '/':
            cout << "Quotient = " << divide(a, b);
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}

// Addition
int sum(int a, int b)
{
    return a + b;
}

// Subtraction
int diff(int a, int b)
{
    return a - b;
}

// Multiplication
int product(int a, int b)
{
    return a * b;
}

// Division
double divide(double a, double b)
{
    return a / b;
}

