#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <random>
#include <algorithm>
using namespace std;

void Welcome() {
    cout << "Welcome to Formoonteller!\n";
    cout << " - - - - - - - - - - - - - - - - \n";
    cout << "|                              |\n";
    cout << "|                              |\n";
    cout << "|                  *           |\n";
    cout << "|            *   *             |\n";
    cout << "|         *     *              |\n";
    cout << "|       *      *               |\n";
    cout << "|      *      *                |\n";
    cout << "|      *      *                |\n";
    cout << "|       *     *                |\n";
    cout << "|        *     *               |\n";
    cout << "|          *    *              |\n";
    cout << "|             *  *             |\n";
    cout << "|                  *           |\n";
    cout << "|                              |\n";
    cout << " - - - - - - - - - - - - - - - - \n";
}

void YourBirthday(int& day, int& month, int& year) {
    cout << "Enter your birth day (DD): ";
    cin >> day;
    cout << "Enter your birth month (MM): ";
    cin >> month;
    cout << "Enter your birth year (YYYY): ";
    cin >> year;

    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 0 || year > 2024) {
        cout << "Invalid input. Please enter your birthday again." << endl;
        YourBirthday(day, month, year);
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
        ZodiacSign = "Invalid date. Please check your birthday.";

    return ZodiacSign;
}

void readMeaningsFromFile(const string& filename, map<string, vector<string>>& cardMeanings) {
    ifstream file(filename);
    string cardName;
    string meaning;

    while (getline(file, cardName)) {
        vector<string> meanings;
        for (int i = 0; i < 3; ++i) {
            getline(file, meaning);
            meanings.push_back(meaning);
        }
        cardMeanings[cardName] = meanings;
    }
    file.close();
}

int main() {
    Welcome();

    char ansgender;
    string name;

    while (true) {
        cout << "Enter your gender (F/M) : ";
        cin >> ansgender;

        if (toupper(ansgender) == 'F' || toupper(ansgender) == 'M') {
            break;
        }
    }

    cout << "Enter your name : ";
    cin.ignore();
    getline(cin, name);

    if (toupper(ansgender) == 'F')
        cout << "Hello! Ms. " << name << endl;
    else if (toupper(ansgender) == 'M')
        cout << "Hello! Mr. " << name << endl;

    int day = 0, month = 0, year = 0; // Initialize variables

    YourBirthday(day, month, year);

    string ZodiacSign = YourZodiac(day, month);
    cout << "Your zodiac is : " << ZodiacSign << ", Right? (Y/N)" << endl;
    string Input ;
    cin >> Input;
    if (Input == "Y")
        cout << "Your zodiac is : " << ZodiacSign;
    else if (Input == "N")
        cout << "Plese check your birthday again.";
    else
        cout << "Invalid zodiac. Please enter your birthday again.";

    random_device rd;
    mt19937 rng(rd());

    map<string, vector<string>> cardMeanings;
    readMeaningsFromFile("card_meanings.txt", cardMeanings);

    char tryAgain = 'Y';

    while (tryAgain == 'Y') {
        vector<string> cardNames;

        for (const auto& pair : cardMeanings) {
            cardNames.push_back(pair.first);
        }

        shuffle(cardNames.begin(), cardNames.end(), rng);

        string card1 = cardNames[0];
        string card2 = cardNames[1];
        string card3 = cardNames[2];

        cout << "Card 1: " << card1 << endl;
        cout << "Past: " << cardMeanings[card1][1] << endl << endl;

        cout << "Card 2: " << card2 << endl;
        cout << "Present: " << cardMeanings[card2][0] << endl << endl;

        cout << "Card 3: " << card3 << endl;
        cout << "Future: " << cardMeanings[card3][2] << endl;

        cout << "\nTry again? (Y/N): ";
        cin >> tryAgain;
        tryAgain = toupper(tryAgain);
    }

    return 0;

}
