#include <Game.hpp>

int main() {
    ComputerPlayer p1;
    ComputerPlayer p2;
    Game game(p1, p2);
    game.start();
    return 0;
}