#include <stdio.h>
#include "TypeOfLove.h"

void InitTypeList(LoveType aTypeList[])
{
 	 int i = 0;
 	 
	 strncpy_s(aTypeList[FRIEND].szName, sizeof(int) * 8, "ģ������ ���", sizeof(int) * 8 -1);
	 strncpy_s(aTypeList[UNSELFISH].szName, sizeof(int) * 7, "��Ÿ�� ���", sizeof(int) * 7 -1);
	 strncpy_s(aTypeList[LOGICAL].szName, sizeof(int) * 7, "���� ���", sizeof(int) * 7 -1);
	 strncpy_s(aTypeList[POSSESSIVE].szName, sizeof(int) * 7, "������ ���", sizeof(int) * 7 -1);
	 strncpy_s(aTypeList[ROMANTIC].szName, sizeof(int) * 7, "������ ���", sizeof(int) * 7 -1);
	 strncpy_s(aTypeList[GAME].szName, sizeof(int) * 7, "������ ���", sizeof(int) * 7 -1);
 	 
 	 for( i = 0; i < TYPE_NUM; i++)
 	 {
	  	  aTypeList[i].nScore = 0;
	 }
	 
	 strncpy_s(aTypeList[FRIEND].szExplain, sizeof(int) * MAX_EXPLAIN, "  ģ������ ����� �����ð��� ���� ������� ������� �����ʹ� ����� ���մϴ�.\n  �������� ������� �޸� ���濡�� ù���� ���ϱ� ���ٴ� �ð��� �帣�鼭\n ����� ������ ��Ʈ�� Ư¡�� �ֽ��ϴ�.\n  �׷��� ������ ������ �� ���� ���ϴ� ��Ȳ������ ����� �̷������\n ��ƽ��ϴ�.\n", sizeof(int) * MAX_EXPLAIN - 1);
	 strncpy_s(aTypeList[UNSELFISH].szExplain, sizeof(int) * MAX_EXPLAIN, "  ��Ÿ�� ����� �������� ����� ģ������ ����� �����Ͽ� �ƹ��� ���� ����\n ������ �����ϰ� �͸����� ����� �Ⲩ�� �����Ϸ� �ϴ� ����� ������ ���մϴ�.\n", sizeof(int) * MAX_EXPLAIN - 1);
	 strncpy_s(aTypeList[LOGICAL].szExplain, sizeof(int) * MAX_EXPLAIN, "  ���� ����� ģ������ ����� ������ ����� ������ �����̰� �ǿ�����\n ����� ���մϴ�.\n  �� ������ �� ����� ���� �ӿ��� ���������� ���� �� �ִ� �Ϳ� ������\n ������ Ư¡�� �ֽ��ϴ�.\n", sizeof(int) * MAX_EXPLAIN - 1);
	 strncpy_s(aTypeList[POSSESSIVE].szExplain, sizeof(int) * MAX_EXPLAIN, "  ������ ����� �������� ����� ������ ����� �������� ��Ÿ���� �ص���\n �������� ���� ������ Ư¡�Դϴ�.\n  ������ ������ �����ϰ� �ڽ������� �������ϱ⸦ ���ϴ� ����� �����Դϴ�.\n", sizeof(int) * MAX_EXPLAIN - 1);
	 strncpy_s(aTypeList[ROMANTIC].szExplain, sizeof(int) * MAX_EXPLAIN, "  ������ ����� ���۽����� ã�ƿ��� ��ü���̰� �������� ������� ���� ������\n ���밨�� ���Դϴ�.\n  �ַ� ù���� ���� ����� ���۵Ǹ� �ð����� �Ϳ� ���ϰ� �̲����� ���Դϴ�.\n  ���� ��Ų���� ���� ����� ǥ���ϴ� ���� �����մϴ�.\n", sizeof(int) * MAX_EXPLAIN - 1);
	 strncpy_s(aTypeList[GAME].szExplain, sizeof(int) * MAX_EXPLAIN, "  ������ ����� ����� ������ �������� �����Ͽ� ����� ������ ����� �ǻ簡\n ���� Ư¡�� ���Դϴ�.\n  �׷��� �� ������� �Ÿ��� �η��ϸ� ���ָ� �ϴٰ��� ��������\n �ٸ� ������� ���� �غ� �Ϸ��մϴ�.\n", sizeof(int) * MAX_EXPLAIN - 1);
}

void ConvertIntoPer(LoveType aTypeList[])
{

	aTypeList[FRIEND].nScore = (double)aTypeList[FRIEND].nScore / 8.0 * 100;
	aTypeList[UNSELFISH].nScore = (double)aTypeList[UNSELFISH].nScore / 9.0 * 100;
	aTypeList[LOGICAL].nScore = (double)aTypeList[LOGICAL].nScore / 9.0 * 100;
	aTypeList[POSSESSIVE].nScore = (double)aTypeList[POSSESSIVE].nScore / 9.0 * 100;
	aTypeList[ROMANTIC].nScore = (double)aTypeList[ROMANTIC].nScore / 8.0 * 100;
	aTypeList[GAME].nScore = (double)aTypeList[GAME].nScore / 8.0 * 100;
}

void SortTypeList(LoveType aTypeList[])
{
 	 int i, j;
 	 LoveType Temp;
 	 
 	 for( i = 0; i < TYPE_NUM-1; i++)
 	 {
	  	  for( j = i+1; j < TYPE_NUM; j++)
		  {
		   	     if( aTypeList[i].nScore < aTypeList[j].nScore )
				 {
				  	 Temp =  aTypeList[i];
				  	 aTypeList[i] = aTypeList[j];
				  	 aTypeList[j] = Temp;
				 }
 		  }
	 }
}	 

int MaxNum(LoveType aTypeList[])
{
	int nMaxCount = 1;
	int i;
	
	for (i = 1; i < TYPE_NUM; i++)
	{
		if (aTypeList[0].nScore == aTypeList[i].nScore)
			nMaxCount++;
	}
	return nMaxCount;
}
