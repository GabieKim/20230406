class Player
{
private:
	int Player_Hp;
	int Player_Mp;

public:
	Player() {}
	void Set(int Hp, int Mp);
	void Attack();
	void Damaged();
};