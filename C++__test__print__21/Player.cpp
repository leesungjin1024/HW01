#include "Player.h"
#include <iostream>
#include <string>

Player::Player(std::string nickname)
{
    setNickbname(nickname);
}




void Player::printPlayerStatus()
{
    std::cout << "------------------------------------" << std::endl;
    std::cout << "* 현재 능력치 *" << std::endl;
    std::cout << "닉네임: " << nickname << std::endl;
    std::cout << "직업: " << job_name << std::endl;
    std::cout << "Lv. " << level << std::endl;
    std::cout << "HP: " << HP << std::endl;
    std::cout << "MP: " << MP << std::endl;
    std::cout << "공격력: " << power << std::endl;
    std::cout << "방어력: " << defence << std::endl;
    std::cout << "정확도: " << accuracy << std::endl;
    std::cout << "속도: " << speed << std::endl;
    std::cout << "------------------------------------" << std::endl;
}


void Player::setjobname(string job_name)
{
    this->job_name = job_name;
};

void Player::setNickbname(string nickname)
{
    this->nickname = nickname;
};

void Player::setHP(int HP)
{
    this->HP = HP;

};

void Player::setMP(int MP)
{
    this->MP = MP;
};

void Player::setPower(int power)
{
    this->power = power;
};

void Player::setDefence(int defence)
{
    this->defence = defence;
};

void Player::setAccuracy(int accuracy)
{
    this->accuracy = accuracy;
};

void Player::setSpeed(int speed)
{
    this->speed = speed;
};