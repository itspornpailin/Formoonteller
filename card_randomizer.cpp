#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <random>
#include <algorithm>

using namespace std;

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