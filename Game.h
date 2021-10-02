#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "HumanPlayer.h"
#include "ComputerPlayer.h"

class Game {
public:
    Game(Player& p1, Player& p2);
    void start();
    void incrementScore(int& score); //adds 1 point to a player's score
    void displayScores(); //displays players' scores

private:
    Player& p1;
    Player& p2;

    //used pointers to keep track of score since by reference would not change the score outside of functions
    int p1Score = 0; 
    int* p1Ptr = &p1Score; //address of player 1's score
    int p2Score = 0;
    int* p2Ptr = &p2Score; //address of player 2's score
};

#endif