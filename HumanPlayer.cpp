
#include "HumanPlayer.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

Choice HumanPlayer::makeChoice() {
    // Prompt the human player for each round�s choice of rock, paper, or scissors.
    // 'Choice' enum: ROCK = 0, PAPER = 1, SCISSORS = 2
    int c = 0;
    do {
        cout << "Enter your choice as a number (ROCK = 0, PAPER = 1, SCISSORS = 2) here: " << endl;
        cin >> c;
    } while (c < 0 || c > 2);
    return Choice(c);
}

string HumanPlayer::getName() {
    return "Human";
}