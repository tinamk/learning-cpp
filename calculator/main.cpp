#include <iostream>

int main()
{
double num1, num2;
char operation;
char continueCalculation;

    do {
        std::cout << "Enter first number: ";
        std::cin >> num1;

        std::cout << "Select an operation(+, -, /, *): ";
        std::cin >> operation;

        std::cout << "Enter second number: ";
        std::cin >> num2;




        switch (operation) {
            case '+':
                std::cout << "Result: " << num1 + num2 << std::endl;
                break;

            case '-':
                std::cout << "Result: " << num1 - num2 << std::endl;
                break;


            case '*':
                std::cout << "Result: " << num1 * num2 << std::endl;

            case '/':
                if (num2 != 0) {
                    std::cout << "Result: " << num1 / num2 << std::endl;
                } else {
                    std::cout << "Error, divided by 0" << std::endl;
                }
                break;

            default:
                std::cout << "Invalid operation" << std::endl;
        }

        std::cout << "Would you like to try again? (Y/N): ";
        std::cin >> continueCalculation;

    } while (continueCalculation == 'Y' || continueCalculation == 'y');

    return 0;
}
