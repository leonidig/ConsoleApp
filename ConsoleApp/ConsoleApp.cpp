#include <iostream>
using namespace std;


double multiply(int num1, int num2) {
    return num1 * num2;
}

double division(int num1, int num2) {
    return num1 / num2;
}

double substraction(int num1, int num2) {
    return num1 - num2;
}

double addition(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int operation;
    double num1, num2;

    while (true) {
        cout << "Enter operation\n1 - multiply\n2 - Division\n3 - Substraction\n4 - Addition\n5 - quit\n> ";
        cin >> operation;

        if (operation == 5) {
            cout << "Goodbye!" << endl;
            break;
        }

        cout << "Enter x: ";
        cin >> num1;
        cout << "Enter y: ";
        cin >> num2;

        switch (operation) {
        case 1:
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case 2:
            if (num2 == 0) {
                cout << "Division by zero error" << endl;
            }
            else {
                cout << "Result: " << division(num1, num2) << endl;
            }
            break;
        case 3:
            cout << "Result: " << substraction(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << addition(num1, num2) << endl;
            break;
        default:
            cout << "Enter a correct option!" << endl;
            break;
        }
    }

    return 0;
}
