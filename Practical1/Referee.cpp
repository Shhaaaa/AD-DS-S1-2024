#include <iostream>
#include <string>
#include "Referee.h"

  
std::string Referee::gameResult(std::string name,char move, std::string oName,char oMove)
{
    // expect p2 to be ai
    std::string winner;
    if (move == 'P')
    {
        winner = name;
        std::cout<<"Player should win";
    }
    else if (move == 'S')
    {
        winner = oName;     
    }
    else
    {
        return nullptr;
    }
    

    return winner;
}