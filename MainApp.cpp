#include <iostream>
#include <stdlib.h>
#include "BaseBallGame.h"
#include "Exception.h"
using namespace std;

int main() {
	BaseBallGame game;
	Exception exception;
	int gameNum;
	while (true) {
		do {
			cout << "~~���� �߱� ����~~" << endl;
			cout << "���ϴ� �޴��� ���ڸ� �Է��ϼ���.(���� ���� [1]\t���� ���� [2]\t���� ����[3]) >> ";
			cin >> gameNum;
			
		} while (!exception.isValidGameNum(gameNum));

		if (gameNum == 1) {
			game.run();
		}
		else if (gameNum == 2) {
			game.explainGame();
		}
		else if (gameNum == 3) {
			cout << "������ �����մϴ�." << endl;
			system("pause");
			return 0;
		}
	}
}