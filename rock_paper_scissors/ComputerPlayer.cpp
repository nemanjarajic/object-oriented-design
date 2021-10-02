#include "ComputerPlayer.hpp"

ComputerPlayer::ComputerPlayer(string chooserName) {
    chooser = ChooserFactory::makeChooser(chooserName);
}

Choice ComputerPlayer::makeChoice() {
    return chooser->makeChoice();
}

string ComputerPlayer::getName() {
    return "Computer";
}