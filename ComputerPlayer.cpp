#include "ComputerPlayer.h"
#include <stdlib.h>
#include <time.h>
#include <random>

void ComputerPlayer::setChooser(string c)
{
    if(c == "-r")
    {
        currentChoice = ChooserFactory->makeChooser(RANDOM);
    }
    else if(c == "-m")
    {
        currentChoice = ChooserFactory->makeChooser(1);
    }

}
Choice ComputerPlayer::makeChoice() {
    srand(time(NULL)); //random seed so that the ComputerPlayer's choices change each time the program is run
    return Choice(rand() % 3); //returns 0=ROCK, 1=PAPER, 2=SCISSORS
}

string ComputerPlayer::getName() {
    return "Computer";
}