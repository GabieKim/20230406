#include "Character.h"

class Monster: Character
{
private:
	int Hp;
	int MaxHp;

	int PosX;
	int PosY;
	Monster();

public:
	
	virtual void Set(int Hp, int MaxHp);
	void SetLocation(int PosX, int PosY) override;

	virtual void Attack();
	virtual void Damaged();
};
