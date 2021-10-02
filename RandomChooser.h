#ifndef RANDOMCHOOSER_H
#include "Chooser.h"
class RandomChooser : public Chooser
{
    public:
    Choice makeChoice();
};
#endif