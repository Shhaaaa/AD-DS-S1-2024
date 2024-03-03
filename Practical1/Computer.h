#pragma once
#include "Player.h"
class Computer : public Player {

public:
    std::string name;
    char makeMove();
    std::string getName();
    std::string getName(std::string nameInput);
};