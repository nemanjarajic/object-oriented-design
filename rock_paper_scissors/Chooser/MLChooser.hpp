#ifndef MLCHOOSER_H
#define MLCHOOSER_H

#include "Chooser.hpp"

class MLChooser : public Chooser {
  public:
    static string NAME;
    Choice makeChoice();
};


#endif