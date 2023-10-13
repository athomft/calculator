#include <iostream>

int a, b, c, op;
char restart;

void ask()
{
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
}

int main()
{
    std::cout << "1. Multiplication\n";
    std::cout << "2. Division\n";
    std::cout << "3. Addition\n";
    std::cout << "4. Subtraction\n";
    std::cout << "5. Quit\n";

    std::cout << "Choose the operator (1/2/3/4) or 5 to quit: ";
    std::cin >> op;

    if (op == 1)
    {
        ask();
        c = a * b;
        std::cout << "The result of " << a << " times " << b << " is " << c;
    }
    else if (op == 2)
    {
        ask();
        if (b == 0)
        {
            std::cout << "Cannot be divided by 0";
            main();
        }
        else
        {
            c = a / b;
        }
        std::cout << "The result of " << a << " divided by " << b << " is " << c;
    }
    else if (op == 3)
    {
        ask();
        c = a + b;
        std::cout << "The result of " << a << " plus " << b << " is " << c;
    }
    else if (op == 4)
    {
        ask();
        c = a / b;
        std::cout << "The result of " << a << " minus " << b << " is " << c;
    }
    else if (op == 5)
    {
        exit(0);
    }

    else
    {
        std::cout << "Invalid operation\n\n";
        main();
    }

    std::cout << "\n\n Do you want to restart the program (Y/N)? ";
    std::cin >> restart;
    if (restart == 'Y' || restart == 'y')
    {
        main();
    }
    else
    {
        exit(0);
    }
}