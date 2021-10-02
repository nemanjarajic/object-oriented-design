#include "Player.h"
/*
* the following functions should never be used since they
* are overridden in HumanPlayer and ComputerPlayer
*/
Choice Player::makeChoice()
{
	cout << "default" << endl;
	return Choice(0);
}

string Player::getName()
{
	return "default str";
}