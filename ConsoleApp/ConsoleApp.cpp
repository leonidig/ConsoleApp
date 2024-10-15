#include <iostream>
using namespace std;


int main() {
    int x;
    int y;
    int option;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    cout << "Enter operation\n1 - addition\n2 - subtracting\n3 - division\n4 - multiplying\n>";
    cin >> option;
    
    switch (option){

        case 1:
            cout << x << " + " << y << " = " << x + y;
            break;

        case 2:
            cout << x << " - " << y << " = " << x - y;
            break;

        case 3:
            if (y != 0) {
                cout << x << " : " << y << " = " << x / y;
            }
            else {
                cout << "Error: Division by zero!";
            }
            break;

       case 4:
            cout << x << " * " << y << " = " << x * y;
            break;

       default:
            cout << "Enter correct option!";
            break;
    }

    return 0;
}
