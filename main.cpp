#include <iostream>
using namespace std;

int main() {
    char gameStart;

    cout << "Would you like to play my number guessing game?" << endl;
    cin >> gameStart;
    cout << endl;

    while(gameStart == 'y' || gameStart == 'Y')
        int answer = rand() % 100 + 1;
        cout << "I am thinking of a number between 1 and 100, take a guess to see if you get it right!" << endl;


    return 0;
}
