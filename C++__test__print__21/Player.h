#pragma once
#include <string>
#include <iostream>
using namespace std;

class Player {
public:
	Player(string nickname);

	virtual void attack() = 0;
	void printPlayerStatus();

	// getter 함수
	    string getJobName() { return job_name; }
      	string getNickname() { return nickname; }
	    int getLevel() { return level; }
		int getHP() { return HP; }
		int getMP(){ return MP; }
		int getPower() { return power; }
		int getDefence() { return defence; }
		int getAccuracy() { return accuracy; }
		int getSpeed() { return speed; }

	// setter 함수
    void setjobname(string jobname);
	void setNickbname(string nickbname);
	void setHP(int HP);
	void setMP(int MP);
	void setPower(int power);
	void setDefence(int defence);
	void setAccuracy(int accuracy);
	void setSpeed(int speed);

protected:
	string job_name;
	string nickname;
	int level;
	int HP;
	int MP;
	int power;
	int defence;
	int accuracy;
	int speed;
};

