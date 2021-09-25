
#include <HumanPlayer.hpp>
#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>

HumanPlayer::HumanPlayer(string name) {
    this->name = name;
}

Choice HumanPlayer::makeChoice() {
    // Prompt the human player for each round’s choice of rock, paper, or scissors.
    // 'Choice' enum: ROCK = 0, PAPER = 1, SCISSORS = 2
    int c = 0;
    std::cout << "Enter your choice as a number (ROCK = 0, PAPER = 1, SCISSORS = 2) here: " << std::endl;
    std::cin >> c;
    return Choice(c);
}

string HumanPlayer::getName() {
    if (strlen(name) > 0) {
        return name;
    } else {
        return "Human";
    }
}