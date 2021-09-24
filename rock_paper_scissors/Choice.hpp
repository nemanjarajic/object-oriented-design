#ifndef CHOICE_H
#define CHOICE_H

#include <iostream>
#include <string>

using namespace std;

enum class Choice {
    ROCK,
    PAPER,
    SCISSORS,
};

inline ostream& operator << (ostream& ofs, Choice choice) {
    switch(choice) {
        case Choice::ROCK: 
            ofs << "Rock";
            break;
        case Choice::PAPER: 
            ofs << "Paper";
            break;
        case Choice::SCISSORS: 
            ofs << "Scissors";
            break;
    }
    return ofs;
}

#endif