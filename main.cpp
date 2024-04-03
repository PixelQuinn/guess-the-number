#include <iostream>
#include <limits>
#include <cstdlib>
using namespace std;

int main() {
    char gameStart;

    while (gameStart != 'n' && gameStart != 'y') {
        cout << "Would you like to play my number guessing game? (y or n)" << endl;
        cin >> gameStart;
        gameStart = tolower(gameStart);
    }

    srand (time(NULL));
    int answer = rand() % 100 + 1;

    while(gameStart == 'y' || gameStart == 'Y') {

        char difficulty;

        while (difficulty != 'e' && difficulty != 'm' && difficulty != 'h') {
            cout << "What difficulty would you like to play on? Easy(input e), Medium(input m), or Hard Mode(input h, if you dare that is!)?" << endl;
            cin >> difficulty;
            difficulty = tolower(difficulty);
        }

        int guessedAnswer, numberOfGuesses;

        cout << "I am thinking of a number between 1 and 100, take a guess to see if you get it right!" << endl;
        cin >> guessedAnswer;

        while (guessedAnswer < 1 || guessedAnswer > 100 || cin.fail ()) {
           cout << "This valid is invalid, please try again.." << endl;
            cin.clear ();
            cin.ignore (numeric_limits<streamsize>::max (), '\n');
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

    system("pause");

    return 0;
}
