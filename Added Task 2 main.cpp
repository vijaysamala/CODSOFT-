#include <iostream>
using namespace std;
int main() {
           int num;
           float num1, num2;

  while (true) {
        cout << "SIMPLE CALCULATOR" << endl<< "1.ADDITION" << endl<< "2.SUBSTRACTION" << endl<< "3.MULTIPLICATION" << endl<< "4.DIVISION" << endl<< "5.EXIT" << endl;
        cout << "Enter your choice: ";
        cin >> num;

        if (num == 5) {
            cout << "Exiting Calculator!" << endl;
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (num) {
            case 1:
                cout << "ANSWER : " << num1 + num2 << endl;
                break;
            case 2:
                cout << "ANSWER :" << num1 - num2 << endl;
                break;
            case 3:
                cout << "ANSWER : " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "ANSWER : " << num1 / num2 << endl;
                else
                    cout << "Error:IDENTIFIED ,Division by zero!" << endl;
                break;
            default:
                cout << "OUT OF RANGE ,CHOOSE CORRECTLY! Try again." << endl;
        }
    }

    return 0;
}
