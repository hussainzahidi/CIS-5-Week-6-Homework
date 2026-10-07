#include <iostream>
#include <string>

// Homework 6 — Hussain Z
// CIS 5 Week 06 · Menu

int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::string;

    int n = 0;
    int count = 5;
    string exit = "The Menu is closed";

    do {
        cout << "===Random Menu===" << endl
            << "Enter 1: Hello message" << endl
            << "Enter 2: Count down" << endl
            << "Enter 3: Exit" << endl << endl;

        cout << "Please select a number: ";
        cin >> n;

        if (n == 1) {
            cout << "Hello, Hussain!" << endl << endl;

        }
        else if (n == 2) {
            while (count >= 0) {
                cout << count << " ";
                count--;
            }
            cout << endl << endl;

        }
        else if (n == 3) {
            cout << " " << endl;

        }
        else {
            cout << "Invalid choice." << endl << endl;
        }

    } while (n != 3);

    cout << exit;

    return 0;
}
