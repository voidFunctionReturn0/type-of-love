#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "TypeOfLove.h"

void StartOrQuit()
{
	int nInput = 0;
	while (1)
	{
		printf(" �����Ϸ��� (o)Ű, �������� (q)Ű�� ��������. ");
		nInput = _getch();
		if (nInput == 'o')
			return;
		else if (nInput == 'q')
			exit(1);
		else
			puts("�Է��� �߸��Ǿ����ϴ�.");
	}
}

int Input()
{
 	char nInput = 0;
 	do {
 		printf("\n\n �׷���(o), �ƴϴ�(x), ������(q)  ");
		nInput = _getch();
		if(nInput == 'o')	return 1;
		else if(nInput == 'x')	return 0;
		else if(nInput == 'q')	exit(1);
		else	puts("�Է��� �߸��Ǿ����ϴ�. �ٽ� �Է����ּ���.");
		} while(1); 
}

void DoYouRepeat(int* nRe)
{
	int nInput = 0;
	printf("\n\n �˻縦 �ٽ� �Ͻðڽ��ϱ�?\n");
	printf(" �ٽ��Ϸ��� (o)Ű, �������� �ƹ� Ű�� ��������. \n\n");
	nInput = _getch();
	if (nInput == 'o')
	{
		*nRe = 1;
		printf("��������������������������������������������������������������������������������");
		return;
	}
	else
		return;
}
