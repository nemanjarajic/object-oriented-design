#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "Player.hpp"

class HumanPlayer : public Player {
  public:
    Choice makeChoice();
    string getName();
};

#endif