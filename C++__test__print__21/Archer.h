#pragma once
#include "Player.h"

class Archer : public Player
{
public:

    Archer(string Nickname);
    void attack() override;

};