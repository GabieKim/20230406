class Slime : Monster
{
private:
	int Slime_Hp;

public:
	void Set(int Hp) override;
	void Attack() override;
	void Damaged() override;
};