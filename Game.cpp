#include "Game.h"
#include <iomanip> 
#define NUMBER_OF_GAMES 20

using namespace std;

Game::Game(Player& p1, Player& p2) : p1(p1), p2(p2) {
}

void Game::incrementScore(int& score) //adds a point to the score provided
{
    score += 1;
}

void Game::displayScores() //displays both players' scores and who is in the lead
{
    cout << "Results" << endl;
    cout << "Player 1 Score: " << *p1Ptr << endl;
    cout << "Player 2 Score: " << *p2Ptr << endl;
    if (*p1Ptr == *p2Ptr)
    {
        cout << "Both players are tied!" << endl;
    }
    else if (*p1Ptr > *p2Ptr)
    {
        cout << "Player 1 is in the lead!" << endl;
    }
    else
    {
        cout << "Player 2 is in the lead!" << endl;
    }
}

void Game::start() {
    cout << "++++++++++++++++++++++++++" << endl;
    cout << "Game Start!!!" << endl;
    cout << "Player 1 is " << p1.getName() << endl;
    cout << "Player 2 is " << p2.getName() << endl;
    cout << "++++++++++++++++++++++++++" << endl;
    for (int i = 1; i <= NUMBER_OF_GAMES; i++) //players play for NUMBER_OF_GAMES 
    { 
        cout << "======== Round " << setfill('0') << setw(2) << i << " ========" << endl;
        Choice choice1 = p1.makeChoice();
        Choice choice2 = p2.makeChoice();
        cout << "Player 1 chose " << choice1 << endl;
        cout << "Player 2 chose " << choice2 << endl;
        if (choice1 == choice2) { //both players choose the same option
            cout << "Tie" << endl;
        } else if (choice1 > choice2) { //if player 1's choice has advantage over player 2's choice
            cout << "Player 1 wins" <<endl;
            incrementScore(*p1Ptr); //increment player 1's score
        } else {
            cout << "Player 2 wins" <<endl;
            incrementScore(*p2Ptr); //increment player 2's score
        }
        cout << "==========================" << endl;
        displayScores(); //display both players's scores
    }
}