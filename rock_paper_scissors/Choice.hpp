#ifndef CHOICE_H
#define CHOICE_H

#include <iostream>
#include <string>

using namespace std;

enum Choice {
    ROCK,
    PAPER,
    SCISSORS,
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

#endif