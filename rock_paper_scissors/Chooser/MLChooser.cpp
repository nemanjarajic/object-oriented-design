#include "MLChooser.hpp"

string MLChooser::NAME = "ML";

MLChooser::MLChooser() {
    initFrequencyMap(5, "");
}

Choice MLChooser::makeChoice() {
    if (curSequence.length() < 4) return Choice(rand() % 3);

    map<string, int> nextFreq = frequency[curSequence];
    Choice choice;
    if (nextFreq[toOneChar(ROCK)] == nextFreq[toOneChar(PAPER)]) {
        choice = rand() % 2 == 0 ? ROCK : PAPER;
    } else if(nextFreq[toOneChar(ROCK)] > nextFreq[toOneChar(PAPER)]) {
        choice = ROCK;
    } else {
        choice = PAPER;
    }
    if (nextFreq[toOneChar(choice)] == nextFreq[toOneChar(SCISSORS)] && rand() % 2 == 0) {
        choice = SCISSORS;
    } else if(nextFreq[toOneChar(choice)] < nextFreq[toOneChar(SCISSORS)]) {
        choice = SCISSORS;
    }
    return Choice((choice + 1) % 3);
}


// keep last four choices
void MLChooser::feedOpponentChoice(Choice choice) {
    string c = toOneChar(choice);
    if (curSequence.length() == 4) {
        frequency[curSequence][c] += 1;
        curSequence.erase(0, 1);
    }
    curSequence += c;
    
}

void MLChooser::postGame() {

}

void MLChooser::initFrequencyMap(int n, string sequence) {
    if (n == 1) {
        frequency[sequence] = {
            {toOneChar(ROCK), 0},
            {toOneChar(PAPER), 0},
            {toOneChar(SCISSORS), 0}
        };
        return;
    } 
    initFrequencyMap(n - 1, sequence + toOneChar(ROCK));
    initFrequencyMap(n - 1, sequence + toOneChar(PAPER));
    initFrequencyMap(n - 1, sequence + toOneChar(SCISSORS));
}

