#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
using namespace std;

// 플레이어 HP MP 몬스터 공격 가능
// 슬라임, 고블린, 멧돼지 몬스터들도 플레이어 공격 가능

int main()
{
	// 플레이어 하나 생성함
	FPlayer* Player = new FPlayer();
	FGoblin* Goblin = new FGoblin();
	FSlime* Slime = new FSlime();

	Player->Move();
	Goblin->Move();
	Slime->Move();

	
	// 플레이어 죽었다(지웠다)
	delete Player;
	delete Goblin;
	delete Slime;




	return 0;
}