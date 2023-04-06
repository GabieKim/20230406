#pragma once
class Character
{
private:
	int Hp;
	int MaxHp;

	int Mp;
	int MaxMp;

	int PosX;
	int PosY;
	
	Character();
public:
	
	virtual void Set(int Hp, int MaxHp, int Mp, int MaxMp);
	virtual void SetLocation(int PosX, int PosY);
	virtual void Attack();
	virtual void Damaged();
};
