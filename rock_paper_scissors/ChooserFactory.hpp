#ifndef CHOOSERFACTORY_H
#define CHOOSERFACTORY_H

#include "Chooser/Chooser.hpp"
#include "Chooser/RandomChooser.hpp"
#include "Chooser/MLChooser.hpp"

class ChooserFactory {
  public:
    static Chooser* makeChooser(string which);
};

#endif