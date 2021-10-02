#include "MachineLearningChooser.h"

MachineLearningChooser::MachineLearningChooser()
{
    ifstream ifs;
    ifs.open("previous_choices.txt");
    if(ifs.fail())
    {
        cout << "Failed to open previous choices file" << endl;
        exit(1);
    }
    char option;
    while(!ifs.eof())
    {
        ifs >> option;
        previousChoices.push_front(option);
    }
    ifs.close();
}
Choice MachineLearningChooser::makeChoice()
{
    int numR = 0;
    int numP = 0;
    int numS = 0;
    for(char& c : previousChoices)
    {
        if(c == 'R')
        {
            numR++;
        }
        else if(c == 'P')
        {
            numP++;
        }
        else if(c == 'S')
        {
            numS++;
        }
        else
        {
            continue;
        }
    }
    
    //determine best choice
    if(numR >= numP && numR >= numS) //rock is most frequent
    {
        return Choice(1); //play paper
    }
    else if(numP >= numR && numP >= numS) //paper is most frequent
    {
        return Choice(2); //play scissors
    }
    else if(numS >= numP && numR >= numR) //scissors is most frequent
    {
        return Choice(0); //play rock
    }
    else
    {
        return Choice(rand() % 3);
    }
}