#include <iostream>

using namespace std;

int a, b, c, op;
char restart;

void ask()
{
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
}

int main()
{
    cout << "1. Multiplication\n";
    cout << "2. Division\n";
    cout << "3. Addition\n";
    cout << "4. Subtraction\n";

    cout << "Choose the operator (1/2/3/4): ";
    cin >> op;

    if (op == 1)
    {
        ask();
        c = a * b;
        cout << "The result of " << a << " times " << b << " is " << c;
    }
    else if (op == 2)
    {
        ask();
        if (b == 0)
        {
            cout << "Cannot be divided by 0";
            main();
        }
        else
        {
            c = a / b;
        }
        cout << "The result of " << a << " divided by " << b << " is " << c;
    }
    else if (op == 3)
    {
        ask();
        c = a + b;
        cout << "The result of " << a << " plus " << b << " is " << c;
    }
    else if (op == 4)
    {
        ask();
        c = a / b;
        cout << "The result of " << a << " minus " << b << " is " << c;
    }
    else
    {
        cout << "Invalid operation\n\n";
        main();
    }

    cout << "\n\n Do you want to restart the program (Y/N)? ";
    cin >> restart;
    if (restart == 'Y' || restart == 'y')
    {
        main();
    }
    else
    {
        exit(0);
    }
}