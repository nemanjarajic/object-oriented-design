#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "Player.h"

class HumanPlayer : public Player { //subclass
  public:
	  Choice makeChoice();
	  string getName();
};

#endif