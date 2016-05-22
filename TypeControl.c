#include <stdio.h>
#include "TypeOfLove.h"

void InitTypeList(LoveType aTypeList[])
{
 	 int i = 0;
 	 
	 strncpy_s(aTypeList[FRIEND].szName, sizeof(int) * 8, "친구같은 사랑", sizeof(int) * 8 -1);
	 strncpy_s(aTypeList[UNSELFISH].szName, sizeof(int) * 7, "이타적 사랑", sizeof(int) * 7 -1);
	 strncpy_s(aTypeList[LOGICAL].szName, sizeof(int) * 7, "논리적 사랑", sizeof(int) * 7 -1);
	 strncpy_s(aTypeList[POSSESSIVE].szName, sizeof(int) * 7, "소유적 사랑", sizeof(int) * 7 -1);
	 strncpy_s(aTypeList[ROMANTIC].szName, sizeof(int) * 7, "낭만적 사랑", sizeof(int) * 7 -1);
	 strncpy_s(aTypeList[GAME].szName, sizeof(int) * 7, "유희적 사랑", sizeof(int) * 7 -1);
 	 
 	 for( i = 0; i < TYPE_NUM; i++)
 	 {
	  	  aTypeList[i].nScore = 0;
	 }
	 
	 strncpy_s(aTypeList[FRIEND].szExplain, sizeof(int) * MAX_EXPLAIN, "  친구같은 사랑은 오랜시간에 걸쳐 우애적인 사랑으로 무르익는 사랑을 말합니다.\n  열정적인 사랑과는 달리 상대방에게 첫눈에 반하기 보다는 시간이 흐르면서\n 사랑의 감정이 싹트는 특징이 있습니다.\n  그렇기 때문에 상대방을 잘 알지 못하는 상황에서는 사랑이 이루어지기\n 어렵습니다.\n", sizeof(int) * MAX_EXPLAIN - 1);
	 strncpy_s(aTypeList[UNSELFISH].szExplain, sizeof(int) * MAX_EXPLAIN, "  이타적 사랑은 열정적인 사랑과 친구같은 사랑이 결합하여 아무런 조건 없이\n 상대방을 좋아하고 맹목적인 희생을 기꺼이 감수하려 하는 사랑의 유형을 말합니다.\n", sizeof(int) * MAX_EXPLAIN - 1);
	 strncpy_s(aTypeList[LOGICAL].szExplain, sizeof(int) * MAX_EXPLAIN, "  논리적 사랑은 친구같은 사랑과 유희적 사랑이 결합한 논리적이고 실용적인\n 사랑을 말합니다.\n  이 유형은 두 사람의 관계 속에서 실질적으로 얻을 수 있는 것에 관심을\n 가지는 특징이 있습니다.\n", sizeof(int) * MAX_EXPLAIN - 1);
	 strncpy_s(aTypeList[POSSESSIVE].szExplain, sizeof(int) * MAX_EXPLAIN, "  소유적 사랑은 열정적인 사랑과 유희적 사랑의 결합으로 나타나며 극도의\n 의존성과 강한 질투가 특징입니다.\n  상대방을 완전히 소유하고 자신조차도 소유당하기를 원하는 사랑의 유형입니다.\n", sizeof(int) * MAX_EXPLAIN - 1);
	 strncpy_s(aTypeList[ROMANTIC].szExplain, sizeof(int) * MAX_EXPLAIN, "  낭만적 사랑은 급작스럽게 찾아오는 육체적이고 정렬적인 사랑으로 강한 정서적\n 유대감을 보입니다.\n  주로 첫눈에 반해 사랑이 시작되며 시각적인 것에 강하게 이끌리는 편입니다.\n  또한 스킨십을 통해 사랑을 표현하는 것을 좋아합니다.\n", sizeof(int) * MAX_EXPLAIN - 1);
	 strncpy_s(aTypeList[GAME].szExplain, sizeof(int) * MAX_EXPLAIN, "  유희적 사랑은 사랑을 일종의 게임으로 생각하여 사랑에 빠져도 헌신할 의사가\n 없는 특징을 보입니다.\n  그래서 늘 상대방과는 거리를 두려하며 연애를 하다가도 언제든지\n 다른 사람에게 떠날 준비를 하려합니다.\n", sizeof(int) * MAX_EXPLAIN - 1);
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
