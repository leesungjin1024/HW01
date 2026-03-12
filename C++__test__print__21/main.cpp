// Main.cpp

#include <iostream>
#include "player.h"
#include "Warrior.h"
#include "Archer.h"
#include "Magician.h"
#include "Thief.h"


int main(void)
{
	string jobs[] = { "전사", "마법사", "도적", "궁수" };
	int job_choice = 0;
	string nickname;

	Player* player = nullptr;

	std::cout << "* 닉네임을 입력해주세요: ";
	std::cin >> nickname;

	std::cout << "* 전직시스템 *" << std::endl;
	std::cout << nickname << "님 환영합니다." << std::endl;
	std::cout << "직업을 선택해주세요." << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cout << (i + 1) << ". " << jobs[i] << std::endl;
	}



	std::cout << "선택:";
	std::cin >> job_choice;

	switch (job_choice)
	{
	case 1:
		player = new Warrior(nickname);
		break;
	case 2:
		player = new Magician(nickname);
		break;
	case 3:
		player = new Thief(nickname);
		break;
	case 4:
		player = new Archer(nickname);
	    break;
	default:
		cout << "잘못된 입력입니다." << endl;
		return 1;
	}
	
	


		player->attack();
		player->printPlayerStatus();

		if (player != nullptr)
			delete player;

		return 0;
}
