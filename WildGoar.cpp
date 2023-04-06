class WildBoar : Monster
{
private:
	int WildBoar_Hp;

public:
	void Set(int Hp) override;
	void Attack() override;
	void Damaged() override;
};