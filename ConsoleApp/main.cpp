#include <iostream>
using namespace std;


int add(int a, int b);


int main() {
    int num1, num2;

    cout << "Enter x: ";
    cin >> num1;

    cout << "Enter y: ";
    cin >> num2;

    int result = add(num1, num2);

    cout << "Result: " << result << endl;

    return 0;
}
