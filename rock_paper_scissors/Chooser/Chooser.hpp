#ifndef CHOOSER_H
#define CHOOSER_H

#include "../Choice.hpp"

class Chooser {
  public:
    virtual Choice makeChoice();
};
#endif