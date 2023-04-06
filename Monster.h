#include "Character.h"

class Monster: Character
{
private:
	int Hp;
	int MaxHp;

	int PosX;
	int PosY;
public:
	Monster();
	virtual void Set(int Hp);
	virtual void Attack();
	virtual void Damaged();
};
