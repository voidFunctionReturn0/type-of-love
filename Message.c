#include <stdio.h>
#include "TypeOfLove.h"

void PrintResult(LoveType aTypeList[], int nMaxNum)
{
	int i = 0;

	printf("\n\n��������������������������������������������������������������������������������");
	printf("\n\n *����� ��� ������ \"%s\"", aTypeList[0].szName);
	
	for (i = 1; i < nMaxNum; i++)
	{
		printf("�� \"%s\"", aTypeList[i].szName);

	}
	printf("�Դϴ�.");

	for (i = 0; i < nMaxNum; i++)
	{
		printf("\n\n%s\n", aTypeList[i].szExplain);
	}
	
	puts("\n �ڼ��� ����� ���ðڽ��ϱ�?");
	
	if (Input())
	{
		printf("\n\n\n\n��������������������������������������������������������������������������������");
		printf("\n\n ĳ������ �ɸ����� John Lee �ڻ��� <����� ����>�̷п� ������\n �ΰ��� ����� ���� ������ �ൿ����� ũ�� 6������ ���� �� �ִٰ� �մϴ�.");
		printf("\n ������ ���(����), ������ ���(�Ķ�), ģ������ ���(���), ������\n ���(����), ���� ���(�ʷ�), ��Ÿ�� ���(��Ȳ)�� �װ��Դϴ�.");
		printf("\n ���� ���������� ����� ������ ������ �̵� ����� ������ ���谡 �����ϴ�.\n �ٸ� �ڽ��� ����� ��︮�� ����, ��︮�� �ʴ� ������ �����ϰ� �ִٸ�\n ����� ����� ���� �� ǳ��ο� �� ���Դϴ�.");
		
		printf("\n\n ����� ����� ������ �����ϴ�.");

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
	printf("�˻� ����� �����Ͻðڽ��ϱ�?");
	nFlag = Input();
	if (nFlag)
	{
		fopen_s(&fp, "My_Type_Of_Love.txt", "w");
		if (fp == NULL)
			printf("##�ؽ�Ʈ ������ ����µ� �����߽��ϴ�.##");
		fprintf(fp, "\n\n ����� ����� ������ �����ϴ�.");
		for (i = 0; i < TYPE_NUM; i++)
		{
			fprintf(fp, "\n\n #%s : %d%%", aTypeList[i].szName, aTypeList[i].nScore);
			fprintf(fp, "\n\n :%s", aTypeList[i].szExplain);
		}
		fclose(fp);
		system("notepad.exe My_Type_Of_Love.txt");
	}
}
