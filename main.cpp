#include <iostream>
using namespace std;

// -----------------------------
// Calculator Class Definition
// -----------------------------
class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Cannot divide by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

// -----------------------------
// Main Program (Menu System)
// -----------------------------
int main() {
    Calculator calc;
    int choice;
    double num1, num2, result;

    do {
        cout << "\n===== MENU DRIVEN CALCULATOR =====" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (choice) {
            case 1:
                result = calc.add(num1, num2);
                cout << "Result: " << result << endl;
                break;

            case 2:
                result = calc.subtract(num1, num2);
                cout << "Result: " << result << endl;
                break;

            case 3:
                result = calc.multiply(num1, num2);
                cout << "Result: " << result << endl;
                break;

            case 4:
                result = calc.divide(num1, num2);
                cout << "Result: " << result << endl;
                break;

            case 5:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
