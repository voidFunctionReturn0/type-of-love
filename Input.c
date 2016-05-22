#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "TypeOfLove.h"

void StartOrQuit()
{
	int nInput = 0;
	while (1)
	{
		printf(" 시작하려면 (o)키, 끝내려면 (q)키를 누르세요. ");
		nInput = _getch();
		if (nInput == 'o')
			return;
		else if (nInput == 'q')
			exit(1);
		else
			puts("입력이 잘못되었습니다.");
	}
}

int Input()
{
 	char nInput = 0;
 	do {
 		printf("\n\n 그렇다(o), 아니다(x), 끝내기(q)  ");
		nInput = _getch();
		if(nInput == 'o')	return 1;
		else if(nInput == 'x')	return 0;
		else if(nInput == 'q')	exit(1);
		else	puts("입력이 잘못되었습니다. 다시 입력해주세요.");
		} while(1); 
}

void DoYouRepeat(int* nRe)
{
	int nInput = 0;
	printf("\n\n 검사를 다시 하시겠습니까?\n");
	printf(" 다시하려면 (o)키, 끝내려면 아무 키나 누르세요. \n\n");
	nInput = _getch();
	if (nInput == 'o')
	{
		*nRe = 1;
		printf("♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥");
		return;
	}
	else
		return;
}
