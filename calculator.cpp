#include <iostream>
using namespace std;

int main()
{
    char restart;

    do
    {
        int a, b, c, op;

        cout << "1. Multiplication\n";
        cout << "2. Division\n";
        cout << "3. Addition\n";
        cout << "4. Subtraction\n";
        cout << "5. Quit\n";

        cout << "Choose the operator (1/2/3/4) or 5 to quit: ";
        cin >> op;

        if (op >= 1 && op <= 4)
        {
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
        }

        switch (op)
        {
        case 1:
            c = a * b;
            cout << "The result of " << a << " times " << b << " is " << c;
            break;
        case 2:
            if (b == 0)
            {
                cout << "Cannot be divided by 0" << endl;
            }
            else
            {
                c = a / b;
                cout << "The result of " << a << " divided by " << b << " is " << c;
            }
            break;
        case 3:
            c = a + b;
            cout << "The result of " << a << " plus " << b << " is " << c;
            break;
        case 4:
            c = a - b;
            cout << "The result of " << a << " minus " << b << " is " << c;
            break;
        case 5:
            return 0; // Exit the program
        default:
            cout << "Invalid operation\n";
        }

        cout << "\nDo you want to restart the program (Y/N)? ";
        cin >> restart;
    } while (restart == 'Y' || restart == 'y');

    return 0;
}