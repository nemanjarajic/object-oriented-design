#include "AlgorithmChooser.h"
Chooser* AlgorithmChooser::makeChooser(Type t)
{
    if(t == RANDOM)
    {
            return new RandomChooser();
    }
    if(t == MACHINELEARNING)
    {
            return new MachineLearningChooser();
    }
}