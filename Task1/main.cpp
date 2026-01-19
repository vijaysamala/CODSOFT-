#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int num, guess = 0;
    srand(time(0));
    num = rand() % 1000 + 1;
cout << " Number Guessing Game " << endl;
    cout << "Guess a number between 1 and 1000" << endl;

    while (guess != num) {
        cout << "Enter your number:";
        cin >> guess;

        if (guess > num) {
            cout << " your guess is Too high,try again." << endl;
        }
        else if (guess < num) {
            cout << "your guess is Too low, try again." << endl;
        }
        else {
            cout << "Congratulations,Your guess is correct." << endl;
        }
}

    return 0;
}
