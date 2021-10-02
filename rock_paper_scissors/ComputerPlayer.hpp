#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H

#include "Player.hpp"
#include "ChooserFactory.hpp"

class ComputerPlayer : public Player {
  public:
    ComputerPlayer(string chooserName);
    Choice makeChoice();
    string getName();
    void feedOpponentChoice(Choice choice);
    void postGame();
  private:
    Chooser* chooser;
};

#endif