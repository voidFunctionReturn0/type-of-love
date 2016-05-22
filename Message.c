#include <stdio.h>
#include "TypeOfLove.h"

void PrintResult(LoveType aTypeList[], int nMaxNum)
{
	int i = 0;

	printf("\n\n♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥");
	printf("\n\n *당신의 사랑 유형은 \"%s\"", aTypeList[0].szName);
	
	for (i = 1; i < nMaxNum; i++)
	{
		printf("과 \"%s\"", aTypeList[i].szName);

	}
	printf("입니다.");

	for (i = 0; i < nMaxNum; i++)
	{
		printf("\n\n%s\n", aTypeList[i].szExplain);
	}
	
	puts("\n 자세한 결과를 보시겠습니까?");
	
	if (Input())
	{
		printf("\n\n\n\n♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥");
		printf("\n\n 캐나다의 심리학자 John Lee 박사의 <사랑의 색깔>이론에 따르면\n 인간의 사랑에 대한 생각과 행동양상은 크게 6가지로 나눌 수 있다고 합니다.");
		printf("\n 낭만적 사랑(빨강), 유희적 사랑(파랑), 친구같은 사랑(노랑), 소유적\n 사랑(보라), 논리적 사랑(초록), 이타적 사랑(주황)이 그것입니다.");
		printf("\n 세상에 절대적으로 우월한 색깔이 없듯이 이들 사랑의 유형도 위계가 없습니다.\n 다만 자신의 색깔과 어울리는 색깔, 어울리지 않는 색깔을 이해하고 있다면\n 당신의 사랑은 조금 더 풍요로워 질 것입니다.");
		
		printf("\n\n 당신의 결과는 다음과 같습니다.");

		for (i = 0; i < TYPE_NUM; i++)
		{
			printf("\n\n #%s : %d%%", aTypeList[i].szName, aTypeList[i].nScore);
			printf("\n\n :%s", aTypeList[i].szExplain);
		}
	}
}

void SaveOrNot(LoveType aTypeList[])
{
	int i = 0;
	int nFlag = 0;
	FILE* fp = 0;
	printf("검사 결과를 저장하시겠습니까?");
	nFlag = Input();
	if (nFlag)
	{
		fopen_s(&fp, "My_Type_Of_Love.txt", "w");
		if (fp == NULL)
			printf("##텍스트 파일을 만드는데 실패했습니다.##");
		fprintf(fp, "\n\n 당신의 결과는 다음과 같습니다.");
		for (i = 0; i < TYPE_NUM; i++)
		{
			fprintf(fp, "\n\n #%s : %d%%", aTypeList[i].szName, aTypeList[i].nScore);
			fprintf(fp, "\n\n :%s", aTypeList[i].szExplain);
		}
		fclose(fp);
		system("notepad.exe My_Type_Of_Love.txt");
	}
}
