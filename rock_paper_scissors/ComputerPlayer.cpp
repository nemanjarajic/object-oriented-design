#include <ComputerPlayer.hpp>
#include <stdlib.h>
#include <cstring>

ComputerPlayer::ComputerPlayer(string name) {
    this->name = name;
}

Choice ComputerPlayer::makeChoice() {
    return Choice(rand() % 3);
}

string ComputerPlayer::getName() {
    if (strlen(name) > 0) {
        return name;
    }
    else {
        return "Computer";
    }
}