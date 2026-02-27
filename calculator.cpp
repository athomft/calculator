#include <iostream>
#include <limits>
#include <string>

using namespace std;

double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }

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
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
}

int getMenuOption() {
    string input;
    while (true) {
        cout << "\n===== Simple Calculator =====\n";
        cout << "1. Multiplication\n";
        cout << "2. Division\n";
        cout << "3. Addition\n";
        cout << "4. Subtraction\n";
        cout << "Type 'q' to quit\n";
        cout << "Choose the operator (1/2/3/4) or 'q' to quit: ";
        cin >> input;
        if (input == "q" || input == "Q") {
            return 0;
        }
        try {
            int op = std::stoi(input);
            if (op >= 1 && op <= 4) {
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return op;
            } else {
                cout << "Invalid operation. Please enter 1, 2, 3, 4 or 'q' to quit." << endl;
            }
        } catch (...) {
            cout << "Invalid input. Please enter 1, 2, 3, 4 or 'q' to quit." << endl;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int main() {
    char restart = 'Y';
    while (restart == 'Y' || restart == 'y') {
        int op = getMenuOption();
        if (op == 0) {
            cout << "Exiting calculator. Goodbye!" << endl;
            break;
        }

        double a = getNumber("Enter the first number: ");
        double b = getNumber("Enter the second number: ");
        double c;
        bool valid = true;

        switch (op) {
            case 1:
                c = multiply(a, b);
                cout << "The result of " << a << " times " << b << " is " << c;
                break;
            case 2:
                if (b == 0.0) {
                    cout << "Error: Division by zero is undefined. Please try again." << endl;
                    valid = false;
                    c = 0.0;  // unused when valid is false; avoids uninitialized value
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

        if (valid) {
            cout << "\nDo you want to restart the program (Y/N)? ";
            cin >> restart;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            restart = 'Y';
        }
        cout << endl;
    }
    return 0;
}