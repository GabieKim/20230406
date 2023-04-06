class Monster
{
private:
	int Monster_Hp;

public:
	Monster() {}
	virtual void Set(int Hp);
	virtual void Attack();
	virtual void Damaged();
};
