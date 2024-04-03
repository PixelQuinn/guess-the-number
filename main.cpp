#include <iostream>
#include <limits>
#include <cstdlib>
using namespace std;

int main() {
    char gameStart;

    cout << "Would you like to play my number guessing game?" << endl;
    while (gameStart != 'n' && gameStart != 'N' && gameStart != 'y' && gameStart != 'Y') {
        cout << "This is an invalid input, please try again." << endl;
        cin >> gameStart;
    }

    srand(time(NULL));
    int answer = rand() % 100 + 1;

    while(gameStart == 'y' || gameStart == 'Y') {

        int guessedAnswer, numberOfGuesses;

        cout << "I am thinking of a number between 1 and 100, take a guess to see if you get it right!" << endl;
        cin >> guessedAnswer;

        while (guessedAnswer < 1 || guessedAnswer > 100 || cin.fail()) {
           cout << "This valid is invalid, please try again.." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> guessedAnswer;
        }

        if (guessedAnswer < answer) {
            cout << "Nope! Your answer is too small." << endl;
            numberOfGuesses += 1;
        }
        else if (guessedAnswer > answer) {
            cout << "No way! Your number is too big." << endl;
            numberOfGuesses += 1;
        }
        else if (guessedAnswer == answer){
            numberOfGuesses += 1;
            cout << "You did it! You found my secret number in " << numberOfGuesses << " numberOfGuesses!" << endl;
            break;
        }

    }
    return 0;
}
