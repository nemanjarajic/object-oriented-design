#ifndef PLAYER_H
#define PLAYER_H

#include "Choice.hpp"

class Player {
  public:
    virtual Choice makeChoice();
    virtual string getName();
    virtual void feedOpponentChoice(Choice choice);
    virtual void postGame();
};

#endif