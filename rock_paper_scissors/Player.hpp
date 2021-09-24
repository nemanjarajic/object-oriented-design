#ifndef PLAYER_H
#define PLAYER_H

#include "Choice.hpp";

class Player {
  public:
    virtual Choice makeChoice();
};

#endif