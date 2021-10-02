#include "RandomChooser.h"
#include <time.h>
#include <random>

Choice RandomChooser::makeChoice()
{
    srand(time(NULL)); //random seed so that the ComputerPlayer's choices change each time the program is run
    return Choice(rand() % 3); //returns 0=ROCK, 1=PAPER, 2=SCISSORS
}