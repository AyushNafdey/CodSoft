#include <bits/stdc++.h>
using namespace std;

class Calculator
{
public:
    void add(int a, int b)
    {
        cout << "Sum of " << a << " and " << b << " is " << a + b << endl;
    }
    void subtract(int a, int b)
    {
        cout << "Difference of " << a << " and " << b << " is " << a - b << endl;
    }
    void multiply(int a, int b)
    {
        cout << "Product of " << a << " and " << b << " is " << a * b << endl;
    }
    void divide(int a, int b)
    {
        if (b == 0)
        {
            cout << "Cannot divide by zero!" << endl;
        }
        else
        {
            cout << "Quotient of " << a << " and " << b << " is " << a / b << endl;
        }
    }
};

int main()
{
    cout << "==============="
         << endl
         << "Simple Calculator" << endl;
    Calculator calc;
    int a, b, operation;
    cout << "Enter 1 for Addition: " << endl;
    cout << "Enter 2 for Subtraction: " << endl;
    cout << "Enter 3 for Multiplication: " << endl;
    cout << "Enter 4 for Division: " << endl;
    cin >> operation;
    if(operation > 4 || operation < 1)
    {
        cout << "Invalid operation!" << endl;
        return 0;
    }
    cout << "Enter the value of variable a: ";
    cin >> a;
    cout << "Enter the value of variable b: ";
    cin >> b;
    switch (operation)
    {
    case 1:
    {
        calc.add(a, b);
        break;
    }
    case 2:
    {
        calc.subtract(a, b);
        break;
    }
    case 3:
    {
        calc.multiply(a, b);
        break;
    }
    case 4:
    {
        calc.divide(a, b);
        break;
    }
    }
    return 0;
}