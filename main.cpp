#include <iostream>
#include "Player.h"

using namespace std;

// �÷��̾� HP MP ���� ���� ����
// ������, ���, ����� ���͵鵵 �÷��̾� ���� ����

int main()
{
	// �÷��̾� �ϳ� ������
	FPlayer* Player = new FPlayer();

	cout << Player << endl;

	
	// �÷��̾� �׾���(������)
	delete Player;
	
	return 0;
}