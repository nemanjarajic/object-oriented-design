#include <ComputerPlayer.hpp>
#include <stdlib.h>

ComputerPlayer::ComputerPlayer(string name) {
    this->name = name;
}

Choice ComputerPlayer::makeChoice() {
    return Choice(rand() % 3);
}

string ComputerPlayer::getName() {
    return "Computer Player name: " + name;
}