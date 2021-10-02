#include "RandomChooser.hpp"

string RandomChooser::NAME = "random";

Choice RandomChooser::makeChoice() {
    return Choice(rand() % 3);
}

