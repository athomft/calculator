

#include <iostream>
#include <limits>
using namespace std;


// Function declarations for basic arithmetic (now using double)
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }


// Function to get a valid floating-point number from user
double getNumber(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        cin >> value;
        if (cin.fail()) {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return value;
        }
    }
}

// Function to get a valid menu option from user
int getMenuOption() {
    int op;
    while (true) {
        cout << "\n===== Simple Calculator =====\n";
        cout << "1. Multiplication\n";
        cout << "2. Division\n";
        cout << "3. Addition\n";
        cout << "4. Subtraction\n";
        cout << "5. Quit\n";
        cout << "Choose the operator (1/2/3/4) or 5 to quit: ";
        cin >> op;
        if (cin.fail() || op < 1 || op > 5) {
            cout << "Invalid operation. Please enter a number between 1 and 5." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return op;
        }
    }
}

// Main program loop
int main() {
    char restart = 'Y';
    while (restart == 'Y' || restart == 'y') {
        int op = getMenuOption();
        if (op == 5) {
            cout << "Exiting calculator. Goodbye!" << endl;
            break;
        }


        double a = getNumber("Enter the first number: ");
        double b = getNumber("Enter the second number: ");
        double c; // Result variable
        bool valid = true;

        // Perform the selected operation
        switch (op) {
            case 1:
                c = multiply(a, b);
                cout << "The result of " << a << " times " << b << " is " << c;
                break;
            case 2:
                if (b == 0.0) {
                    cout << "Error: Division by zero is undefined. Please try again." << endl;
                    valid = false;
                } else {
                    c = divide(a, b);
                    cout << "The result of " << a << " divided by " << b << " is " << c;
                }
                break;
            case 3:
                c = add(a, b);
                cout << "The result of " << a << " plus " << b << " is " << c;
                break;
            case 4:
                c = subtract(a, b);
                cout << "The result of " << a << " minus " << b << " is " << c;
                break;
        }

        // Ask user if they want to restart, only if calculation was valid
        if (valid) {
            cout << "\nDo you want to restart the program (Y/N)? ";
            cin >> restart;
            // Clear input buffer in case user enters more than one character
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            // On invalid calculation (e.g., division by zero), always restart
            restart = 'Y';
        }
        cout << endl;
    }
    return 0;
}