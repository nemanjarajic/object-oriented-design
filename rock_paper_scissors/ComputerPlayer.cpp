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

void ComputerPlayer::feedOpponentChoice(Choice choice) {
    chooser->feedOpponentChoice(choice);
}

void ComputerPlayer::postGame() {
    chooser->postGame();
}