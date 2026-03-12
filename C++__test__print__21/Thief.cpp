#include "Thief.h"
#include <iostream>
#include <string>

Thief::Thief(string nickname) : Player(nickname)
{
    job_name = "도적";
    std::cout << "* 도적으로 전직하였습니다." << std::endl;
    std::cout << nickname << std::endl;
    level = 10;
    HP = 80;
    MP = 30;
    power = 7;
    defence = 5;
    accuracy = 8;
    speed = 20;
}
void Thief::attack()
{
    std::cout << "단검을 투척한다." << std::endl;
}
