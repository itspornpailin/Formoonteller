#include<iostream>
#include<string>
using namespace std;

string YourBirthday(int day, int month, int year) {

    cout << "Enter your birth day (DD): ";
    cin >> day;
    cout << "Enter your birth month (MM): ";
    cin >> month;
    cout << "Enter your birth year (YYYY): ";
    cin >> year;

    cout << "Your birthday is : " << day << "/" << month << "/" << year << endl;

    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 0 || year > 2024) {
        cout << "Invalid input. Please enter your birthday again." << endl;
        return YourBirthday(day, month, year);
    }

}

string YourZodiac(int day, int month){
    string ZodiacSign;

    if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
        ZodiacSign = "Aquarius";
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20))
        ZodiacSign = "Pisces";
    else if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
        ZodiacSign = "Aries";
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
        ZodiacSign = "Taurus";
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
        ZodiacSign = "Gemini";
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
        ZodiacSign = "Cancer";
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
        ZodiacSign = "Leo";
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
        ZodiacSign = "Virgo";
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
        ZodiacSign = "Libra";
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
        ZodiacSign = "Scorpio";
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
        ZodiacSign = "Sagittarius";
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
        ZodiacSign = "Capricorn";
    else
        ZodiacSign = "Invalid date. Plese check your birthday.";

    return ZodiacSign;

}

int main() {
    int day, month, year;

    YourBirthday(day, month, year);

    string SignZodiac = YourZodiac(day, month);
    cout << "Your zodiac is : " << SignZodiac << endl;

    return 0;
}
