#ifndef RANDOMCHOOSER_H
#define RANDOMCHOOSER_H

#include "Chooser.hpp"

class RandomChooser : public Chooser {
  public:
    static string NAME;
    Choice makeChoice();
    void feedOpponentChoice(Choice choice);
    void postGame();
    string getName();
};

#endif