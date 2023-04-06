class Goblin : Monster
{
private:
	int Goblin_Hp;

public:
	void Set(int Hp) override;
	void Attack() override;
	void Damaged() override;
};