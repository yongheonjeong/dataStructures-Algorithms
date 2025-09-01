#pragma once
#ifndef GAME_ENTRY_H
#define GAME_ENTRY_H

#include <iostream>

class GameEntry {
public:
	GameEntry(const std::string& n = "", int s = 0);
	std::string getName() const;
	int getScore() const;
private:
	std::string name;
	int score;
};


#endif