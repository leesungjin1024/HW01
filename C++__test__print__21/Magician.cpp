#include "Magician.h"
#include <iostream>
#include <string>

Magician::Magician(string nickname) : Player(nickname)
{
    job_name = "마법사";
    std::cout << "* 마법사로 전직하였습니다." << std::endl;
    std::cout << nickname << std::endl;
    level = 10;
    HP = 60;
    MP = 100;
    power = 3;
    defence = 5;
    accuracy = 7;
    speed = 5;
}

void Magician::attack()
{
     std::cout << "마법을 발사한다." << std::endl;
}