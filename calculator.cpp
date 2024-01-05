#include <iostream>

using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    int divide(int a, int b) {
        if (b != 0) {
            return a / b;
        } else {
            cerr << "Error: Division by zero." << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calculator;

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Sum: " << calculator.add(num1, num2) << endl;
    cout << "Difference: " << calculator.subtract(num1, num2) << endl;
    cout << "Product: " << calculator.multiply(num1, num2) << endl;
    cout << "Quotient: " << calculator.divide(num1, num2) << endl;

    return 0;
}
