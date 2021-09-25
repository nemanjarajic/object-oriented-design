#ifndef GAME_H
#define GAME_H

#include "Player.hpp"
#include "HumanPlayer.hpp"
#include "ComputerPlayer.hpp"

class Game {
  public:
      Game(Player& p1, Player& p2);
      void start();
      
  private:
      Player& p1;
      Player& p2;
};

#endif