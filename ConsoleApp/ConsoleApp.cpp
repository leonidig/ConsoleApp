#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int main() {
    srand(time(0));
    int randomNumber = rand() % 101;
    cout << randomNumber << "\n";
    int userNumber = 0;
    int attempts = 0;

    cout << "I guess number from 1 to 100";
    while (userNumber != randomNumber) {
        cout << "Enter random number: ";
        cin >> userNumber;
        attempts++;

        if (userNumber > randomNumber) {
            cout << "Random number is lower than your" << endl;
        }else if (userNumber < randomNumber) {
            cout << "Random number is bigger than your";
        }
        else {
            cout << "U won!\nAttempts = attempts";
            break;
        }
    }
    return 0;
}
