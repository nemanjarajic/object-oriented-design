#ifndef MLCHOOSER_H
#define MLCHOOSER_H

#include "Chooser.hpp"
#include <map>

class MLChooser : public Chooser {
  public:
    MLChooser();
    static string NAME;
    map<string,map<string,int>> frequency;
    Choice makeChoice();
    void feedOpponentChoice(Choice choice);
    void postGame();
  private:
    string curSequence;
    void initFrequencyMap(int n, string sequence);
    void loadFile();

};


#endif