#ifndef CHOICE_H
#define CHOICE_H

#include <iostream>
#include <string>

using namespace std;

enum Choice {
    ROCK, //0
    PAPER, //1
    SCISSORS, //2
};

inline ostream& operator << (ostream& ofs, Choice choice) {
    switch(choice) {
        case ROCK: 
            ofs << "Rock";
            break;
        case PAPER: 
            ofs << "Paper";
            break;
        case SCISSORS: 
            ofs << "Scissors";
            break;
    }
    return ofs;
}

inline bool operator > (Choice choice1, Choice choice2) {
    if (choice1 == ROCK)    return choice2 == SCISSORS;
    if (choice1 == PAPER)   return choice2 == ROCK;
    return choice2 == PAPER;
}

#endif