#include <HumanPlayer.hpp>

HumanPlayer::HumanPlayer(string name) {
    this->name = name;
}

Choice HumanPlayer::makeChoice() {
    
}

string HumanPlayer::getName() {
    return "Human Player name: " + name;
}