#include "Game.h"

int main() {
    HumanPlayer p1;
    ComputerPlayer p2;
    Game game(p1, p2);
    game.start();
    return 0; //end of program
}