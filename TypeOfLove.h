#pragma once

#include <Windows.h>
#define MAX_TYPE_NAME 70
#define TYPE_NUM 6
#define MAX_EXPLAIN 100

typedef struct lovetype {
	int szName[MAX_TYPE_NAME];		//�ѱ۹��ڿ��� ���� ���̶� int�� ����Ͽ���. 
	int nScore;
	int szExplain[MAX_EXPLAIN];
}LoveType;

enum TYPENAME { FRIEND, UNSELFISH, LOGICAL, POSSESSIVE, ROMANTIC, GAME };

typedef enum TYPENAME TYPENAME;

void StartOrQuit();

void InitTypeList(LoveType[]);

int Input();

void gotoxy(int, int);

void ConvertIntoPer(LoveType[]);

void SortTypeList(LoveType[]);

int MaxNum(LoveType[]);

void PrintResult(LoveType[], int);

void SaveOrNot(LoveType[]);

void DoYouRepeat(int*);

