#ifndef ALGORITHM_CHOOSER
#include "Chooser.h"
#include "RandomChooser.h"
#include "MachineLearningChooser.h"

class AlgorithmChooser //selects which algorithm should be used
{
    public:
    enum Type
    {
        RANDOM,
        MACHINELEARNING
    };
    Chooser* makeChooser(Type t);
};
#endif