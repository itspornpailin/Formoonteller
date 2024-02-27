#include "Randomizer.h"

int main(){

    string cardPast = RandomCardPast();
    string meaningPast = RandomMeaningPast(RandomCardPast());
    string cardPresent = RandomCardPresent();
    string meaningPresent = RandomMeaningPresent(RandomCardPresent());
    string cardFuture = RandomCardFuture();
    string meaningFuture = RandomMeaningFuture(RandomCardFuture());
    char answer;

    while(answer != 'N'){
        cout << "Your first card is " << cardPast << ". Meaning: " << meaningPast << endl;
        cout << "Your second card is " << cardPresent << ". Meaning: " << meaningPresent << endl;
        cout << "Your third card is " << cardFuture << ". Meaning: " << meaningFuture << endl;

        cout << "Go again? Y/N" << endl;
        cin >> answer;

        return 0;
    }
}
