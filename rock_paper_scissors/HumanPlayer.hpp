#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "Player.hpp"

class HumanPlayer : public Player {
  public:
    virtual Choice makeChoice();
    virtual string getName();
};

#endif