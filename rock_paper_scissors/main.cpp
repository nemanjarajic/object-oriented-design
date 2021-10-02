#include "Game.hpp"

int main(int argc, const char *args[]) {
    string mode = MLChooser::NAME;
    if (argc > 1) {
        string arg1 = args[1];
        if (arg1 == "-r") mode = RandomChooser::NAME;
        else if (arg1 == "-m") mode = MLChooser::NAME;
    }
    HumanPlayer p1;
    ComputerPlayer p2(mode);
    Game game(p1, p2);
    game.start();
    return 0;
}