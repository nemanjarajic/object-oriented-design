#ifndef PLAYER_H
#define PLAYER_H

#include "Choice.h"

class Player { //superclass
  public:
    virtual Choice makeChoice();
    virtual string getName();
};

#endif