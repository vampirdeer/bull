// FILE NAME : SnakeThis.cpp

#include <stdio.h>
#include <conio.h>
#include <time.h>
#include "game.h"

// ■ ▲ ▼ ◀ ▶ ♥

int headDirectionWeight[4][2] = {
	{0, -1}, // 위로 이동
	{0, 1}, // 아래로 이동
	{-2, 0}, // 왼쪽으로 이동
	{2, 0} // 오른쪽으로 이동
};

int setHeadDirection(int pressedKeyData);
void moveSnakeHead(int& posX, int& posY, int headDirection);

int main()
{
	int currentPosX;
	int currentPosY;
	int currentHeadDirection = 0;
	printMapBoundary();
	SetCursorPos(MAP_CENTER_HORIZON * 2, MAP_CENTER_VERTICAL);
	printf("■");
	currentPosX = MAP_CENTER_HORIZON * 2;
	currentPosY = MAP_CENTER_VERTICAL;
	while (true) {
		int refTime = clock();
		int currentTime = 0;
		while (true) {
			if (kbhit()) {
				if (getch() == 224) {
					int pressedKey = getch();
					currentHeadDirection = setHeadDirection(pressedKey);
				}
			}
			currentTime += clock() - refTime;
			if (currentTime > 300000) {
				currentTime = 0;
				break;
			}
		}
		moveSnakeHead(currentPosX, currentPosY, currentHeadDirection);
	}
	return 0;
}

void moveSnakeHead(int& posX, int& posY, int headDirection) {
	int preposX = posX + headDirectionWeight[headDirection][0];
	int preposY = posY + headDirectionWeight[headDirection][1];
	if (preposX < 2 || preposX>(MAP_SIZE_HORIZON - 2) * 2)return;
	if (preposY < 1 || preposY>MAP_SIZE_VERTICAL)return;
	setCursorPos(posX, posY);
	printf("  ");
	posX = preposX;
	posY = preposY;
	setCursorPos(posX, posY);
	printf("■");
}

int setHeadDirection(int pressedKeyData) {
	int changedHeadDirection;
	switch (pressedKeyData) {
	case KEY_CODE_UP:
		// 진행 방향을 위로 지정
		changedHeadDirection = 0;
		break;

	case KEY_CODE_DOWN:
		// 진행 방향을 아래로 지정
		changedHeadDirection = 1;
		break;

	case KEY_CODE_LEFT:
		// 진행 방향을 왼쪽로 지정
		changedHeadDirection = 2;
		break;

	case KEY_CODE_RIGHT:
		// 진행 방향을 오른쪽로 지정
		changedHeadDirection = 3;
		break;

	default:
		break;
	}
	return changedHeadDirection;
}