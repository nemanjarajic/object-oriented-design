#ifndef MACHINELEARNINGCHOOSER_H
#include "Chooser.h"
#include <forward_list>
#include <fstream>
class MachineLearningChooser : public Chooser
{
    public:
    Choice makeChoice();
    MachineLearningChooser();
    private:
    forward_list<char> previousChoices;
};
#endif