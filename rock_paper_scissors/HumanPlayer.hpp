#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "Player.hpp"

class HumanPlayer : public Player {
  public:
    virtual Choice makeChoice();
    virtual string getName();
    HumanPlayer(string name);
  private:
      string name;
};

#endif