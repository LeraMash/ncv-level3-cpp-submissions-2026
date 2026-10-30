

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

// Stage 1: Pick a secret - function
int randomNumber(int maximum) {
    return 1 + rand() % maximum;
}

// Stage 2: One guess - function
int getGuess() {
    int guess;
    cout << "Guess a number from 1 to 20: ";
    cin >> guess;

    // Clear if user types letter
    if (!cin) {
        cin.clear();
        cin.ignore(1000, '\n');
        return -1; // invalid
    }
    return guess;
}

// Stage 5: Hot or cold - function
string getClue(int guess, int secret) {
    if (guess == secret) return "Correct!";
    if (fabs(guess - secret) <= 3) return "Hot!";
    return "Cold.";
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    // Stage 1
    int secret = randomNumber(20);
    int guess = 0;
    int tries = 0; // Stage 4

    cout << "=== GUESSING GAME ===" << endl;
    cout << "I am thinking of a number from 1 to 20." << endl;
    // cout << "[TEST] Secret is: " << secret << endl; // uncomment to test

    // Stage 3: Repeat - do while loop
    do {
        guess = getGuess(); // Stage 2

        if (guess < 1 || guess > 20) {
            cout << "Please enter 1-20 only!" << endl;
            continue;
        }

        tries++; // Stage 4: Count tries

        string clue = getClue(guess, secret); // Stage 5
        cout << clue << endl;

    } while (guess != secret);

    // Stage 6: The finished game
    cout << "Number of tries: " << tries << endl;

    return 0;
}
