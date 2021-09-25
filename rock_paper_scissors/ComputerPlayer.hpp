#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H

#include "Player.hpp";

class ComputerPlayer : public Player {
  public:
    virtual Choice makeChoice();
    virtual string getName();
    ComputerPlayer(string name);
  private:
      string name;
};

#endif