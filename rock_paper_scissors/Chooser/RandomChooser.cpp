#include "RandomChooser.hpp"

string RandomChooser::NAME = "random";

Choice RandomChooser::makeChoice() {
    return Choice(rand() % 3);
}

void RandomChooser::feedOpponentChoice(Choice choice) {

}

void RandomChooser::postGame() {

}