#include <iostream>
#include <string>
#include "warrior.h"

Warrior::Warrior(string nickname) : Player(nickname)
{
    job_name = "전사";
    std::cout << "* 전사로 전직하였습니다." << std::endl;
    std::cout << nickname << std::endl;
    level = 10;
    HP = 100;
    MP = 30;
    power = 10;
    defence = 10;
    accuracy = 5;
    speed = 10;
}
void Warrior::attack()
{
    std::cout << "검을 휘두른다." << std::endl;
}
