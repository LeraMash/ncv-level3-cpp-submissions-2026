
#include <iostream>
using namespace std;


void input(int a[]);
int countEven(int a[]);
void oddNumbers(int a[]);
void sortNumbers(int a[]);
void display(int a[]);

int main()
{
    int num[5];

    input(num);
    cout << "Even numbers: " << countEven(num) << endl;
    oddNumbers(num);
    sortNumbers(num);
    display(num);

    return 0;
}


void input(int a[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number: ";
        cin >> a[i];
    }
}


int countEven(int a[])
{
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}


void oddNumbers(int a[])
{
    cout << "Odd numbers: ";

    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 != 0)
        {
            cout << a[i] << " ";
        }
    }

    cout << endl;
}


void sortNumbers(int a[])
{
    int temp;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}


void display(int a[])
{
    cout << "Sorted numbers: ";

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}
