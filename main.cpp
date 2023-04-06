#include <iostream>
#include "Player.h"

using namespace std;

// 플레이어 HP MP 몬스터 공격 가능
// 슬라임, 고블린, 멧돼지 몬스터들도 플레이어 공격 가능

int main()
{
	// 플레이어 하나 생성함
	FPlayer* Player = new FPlayer();

	cout << Player << endl;

	
	// 플레이어 죽었다(지웠다)
	delete Player;
	
	return 0;
}