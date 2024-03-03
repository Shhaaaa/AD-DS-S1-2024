#include <iostream>
#include "Human.h"
#include "Player.h"


char Human::makeMove(){
    char move;
    std::cout << "Enter move: ";
    std::cin >> move;
    return move;
}

std::string Human::getName(){
    std::string name = "Human";
    return name;
    }

std::string Human::getName(std::string nameInput){
    std::string name = nameInput;
    return name;
}
