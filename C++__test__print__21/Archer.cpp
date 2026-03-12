#include "Archer.h"
#include <iostream>
#include <string>

Archer::Archer(string nickname) : Player(nickname)
{
    job_name = "궁수";
    std::cout << " 궁수로 전직하였습니다." << std::endl;
    std::cout << nickname << std::endl;
    level = 10;
    HP = 70;
    MP = 30;
    power = 8;
    defence = 5;
    accuracy = 10;
    speed = 15;
}
   
void Archer::attack()
{
     std::cout << "화살을 발사한다." << std::endl;
}