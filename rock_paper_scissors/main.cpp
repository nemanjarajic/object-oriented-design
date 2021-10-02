#include "Game.hpp"

int main() {
    HumanPlayer p1;
    ComputerPlayer p2(RandomChooser::NAME);
    Game game(p1, p2);
    game.start();
    return 0;
}