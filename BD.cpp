#include <iostream>
using namespace std;

int main() {
    int day, month, year;

    // Prompt the user to enter their birth day (DD)
    cout << "Enter your birth day(DD): ";
    cin >> day;

    // Prompt the user to enter their birth month (MM)
    cout << "Enter your birth month(MM): ";
    cin >> month;

    // Prompt the user to enter their birth year (YY)
    cout << "Enter your birth year(YY): ";
    cin >> year;

    // Output the entered birth date
    cout << "You entered: " << day << "/" << month << "/" << year << std::endl;

    return 0;
}

