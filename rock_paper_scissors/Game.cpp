#include "Game.hpp"
#include <iomanip> 

using namespace std;

Game::Game(Player& p1, Player& p2) 
    : p1(p1), p2(p2) {
}

void Game::start() {
    cout << "++++++++++++++++++++++++++" << endl;
    cout << "Game Start!!!" << endl;
    cout << "Player 1 is " << p1.getName() << endl;
    cout << "Player 2 is " << p2.getName() << endl;
    cout << "++++++++++++++++++++++++++" << endl;
    for (int i = 1; i <= 20; i++) {
        cout << "======== Round " << setfill('0') << setw(2) << i << " ========" << endl;
        Choice choice1 = p1.makeChoice();
        Choice choice2 = p2.makeChoice();
        cout << "Player 1 choose " << choice1 << endl;
        cout << "Player 2 choose " << choice2 << endl;
        p1.feedOpponentChoice(choice2);
        p2.feedOpponentChoice(choice1);
        if (choice1 == choice2) {
            cout << "Tie" << endl;
        } else if (choice1 > choice2) {
            cout << "Player 1 win" <<endl;
        } else {
            cout << "Player 2 win" <<endl;
        }
        cout << "==========================" << endl;
    }
    p1.postGame();
    p2.postGame();
}