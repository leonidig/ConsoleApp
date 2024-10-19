#include <iostream>
using namespace std;


int add(int a, int b);


int main() {
    int num1, num2;

    cout << "¬ведите первое число: ";
    cin >> num1;

    cout << "¬ведите второе число: ";
    cin >> num2;

    int result = add(num1, num2);

    cout << "–езультат сложени€: " << result << endl;

    return 0;
}
