#include <iostream>
using namespace std;


int add(int a, int b);


int main() {
    int num1, num2;

    cout << "������� ������ �����: ";
    cin >> num1;

    cout << "������� ������ �����: ";
    cin >> num2;

    int result = add(num1, num2);

    cout << "��������� ��������: " << result << endl;

    return 0;
}
