#include "Character.h"

class Player : Character
{
private:
	int Hp;
	int MaxHp;

	int Mp;
	int MaxMp;

	int PosX;
	int PosY;

public:
	Player();
	void Set(int Hp, int Mp) override;
	void Attack() override;
	void Damaged() override;
};