#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H

#include "Player.h"

class ComputerPlayer : public Player { //subclass
  public:
    Choice makeChoice();
    string getName();
};

#endif