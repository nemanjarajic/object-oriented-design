#include "ComputerPlayer.hpp"
#include <stdlib.h>

Choice ComputerPlayer::makeChoice() {
    return Choice(rand() % 3);
}

string ComputerPlayer::getName() {
    return "Computer";
}