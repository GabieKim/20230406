#include "Monster.h"

class Goblin : Monster
{
private:
	int Hp;
	int MaxHp;

	int PosX;
	int PosY;

public:
	void Set(int Hp, int MaxHp) override;
	void SetLocation(int PosX, int PosY) override;
	void Attack() override;
	void Damaged() override;
};