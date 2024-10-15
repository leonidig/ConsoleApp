#include <iostream>

int main() {
    int userNumber;
    std::cout << "Enter number: ";
    std::cin >> userNumber;

    for (int i = 1; i <= 10; i++) {
        std::cout << i << " * " << userNumber << " = " << i * userNumber << std::endl;
    }

    return 0;
}
