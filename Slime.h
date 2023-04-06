#include "Monster.h"

class Slime : Monster
{
private:
	int Hp;
	int MaxHp;

	int PosX;
	int PosY;

public:
	void Set(int Hp) override;
	void Attack() override;
	void Damaged() override;
};