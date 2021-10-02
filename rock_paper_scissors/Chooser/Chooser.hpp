#ifndef CHOOSER_H
#define CHOOSER_H

#include "../Choice.hpp"

class Chooser {
  public:
    virtual Choice makeChoice();
    virtual void feedOpponentChoice(Choice choice);
    virtual void postGame();
    virtual string getName();
};
#endif