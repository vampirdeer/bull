// file NAME : game.h
#include <Windows.h>
#pragma once
#pragma warning(disable:4996)

#define KEY_CODE_UP 72
#define KEY_CODE_DOWN 80
#define KEY_CODE_LEFT 75
#define KEY_CODE_RIGHT 77

const int MAP_SIZE_HORIZON = 30;
const int MAP_SIZE_VERTICAL = 27;
const int MAP_CENTER_HORIZON = MAP_SIZE_HORIZON / 2;
const int MAP_CENTER_VERTICAL = MAP_SIZE_VERTICAL / 2;

void setCursorPos(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


void printMapBoundary()
{
	printf("бсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бс                                                        бс\n");
	printf("бсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбс\n");
}