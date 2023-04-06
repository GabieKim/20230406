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

	Player();

public:
	
	void Set(int Hp, int MaxHp, int Mp, int MaxMp) override;
	void SetLocation(int PosX, int PosY) override;

	void Attack() override;
	void Damaged() override;
};