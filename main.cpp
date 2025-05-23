#include <iostream>
#include <cmath>  // For advanced math functions
using namespace std;

// Basic operation functions
double add(double a, double b)       { return a + b; }
double subtract(double a, double b)  { return a - b; }
double multiply(double a, double b)  { return a * b; }
double divide(double a, double b)    { return (b != 0) ? a / b : NAN; }

// Advanced operation functions
double power(double base, double exp)      { return pow(base, exp); }
double squareRoot(double x)                { return (x >= 0) ? sqrt(x) : NAN; }
double naturalLog(double x)                { return (x > 0) ? log(x) : NAN; }
double exponential(double x)               { return exp(x); }
double sine(double x)                      { return sin(x); }
double cosine(double x)                    { return cos(x); }
double tangent(double x)                   { return tan(x); }

// Menu function
void displayMenu() {
    cout << "\n=== Advanced Calculator Menu ===\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power (x^y)\n";
    cout << "6. Square Root\n";
    cout << "7. Natural Logarithm\n";
    cout << "8. Exponential (e^x)\n";
    cout << "9. Sine\n";
    cout << "10. Cosine\n";
    cout << "11. Tangent\n";
    cout << "Enter your choice (1–11): ";
}

int main() {
    int choice;
    double num1, num2;
    char again;

    do {
        displayMenu();  // Call the menu function
        cin >> choice;

        // Get inputs based on choice
        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        } else if (choice == 5) {
            cout << "Enter base: ";
            cin >> num1;
            cout << "Enter exponent: ";
            cin >> num2;
        } else if (choice >= 6 && choice <= 11) {
            cout << "Enter number (in radians for trig functions): ";
            cin >> num1;
        }

        // Perform operation
        switch (choice) {
            case 1: cout << "Result: " << add(num1, num2) << endl; break;
            case 2: cout << "Result: " << subtract(num1, num2) << endl; break;
            case 3: cout << "Result: " << multiply(num1, num2) << endl; break;
            case 4:
                if (num2 != 0)
                    cout << "Result: " << divide(num1, num2) << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            case 5: cout << "Result: " << power(num1, num2) << endl; break;
            case 6:
                if (num1 >= 0)
                    cout << "Result: " << squareRoot(num1) << endl;
                else
                    cout << "Error: Negative input for square root!" << endl;
                break;
            case 7:
                if (num1 > 0)
                    cout << "Result: " << naturalLog(num1) << endl;
                else
                    cout << "Error: Logarithm domain error!" << endl;
                break;
            case 8: cout << "Result: " << exponential(num1) << endl; break;
            case 9: cout << "Result (sin): " << sine(num1) << endl; break;
            case 10: cout << "Result (cos): " << cosine(num1) << endl; break;
            case 11: cout << "Result (tan): " << tangent(num1) << endl; break;
            default: cout << "Invalid choice!" << endl;
        }

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "Thanks for using the advanced calculator!" << endl;
    return 0;
}
