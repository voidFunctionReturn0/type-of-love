/*
프로젝트명 : 사랑의 유형 검사

컴파일러 : Dev C++ 

실행 OS : Windows  

내용 : 50가지 질문에 대한 답을 통해 자신이 6가지 사랑의 유형 중
      어떤 유형에 속하는 지 알아보는 프로그램.

입력 : 각 질문에 대해 그렇다('o') 혹은 아니다('x') 중 하나로 답한다.

출력 : 검사 결과로 나온 자신의 사랑의 유형에 대한 백분율과 가장 높은 유형에 대한
      설명을 출력한다. 추가 선택사항으로 가장 높은 유형이 아닌 나머지 유형에
      대한 설명 출력을 할 수 있다. 검사결과를 메모장으로 저장할 수도 있다.
구조 : 해당 질문의 답이 'o'일 경우, 질문이 속한 유형의 점수를 1점 올린다.
	  모든 질문에 대한 답이 완료되면 6가지 유형에 대한 점수를 백분율로 구한다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TypeOfLove.h"



void gotoxy(int x, int y)
{
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}


int _cdecl main(int argc, char *argv[])
{
	int nRepeatFlag = 0;
	int i = 0;
	int nMaxNum = 0;
	LoveType aTypeList[TYPE_NUM];

	InitTypeList(aTypeList);

	do {
		system("cls");
		printf("\n\t\t\t[ 사랑의 유형 검사 ]\n\n");
		puts(" *여러분들은 사랑이란 어떤 것이라고 생각하세요? 여러분들이");
		puts(" 평소에 갖고 있는 생각이나 태도에 가장 가까운 쪽으로 대답해");
		puts(" 주세요. 문항에 답할 때에는 '그렇다(o)키' 혹은 '아니다(x)키'로만");
		puts(" 답해야 합니다. 문항은 총 50문항입니다. 중간에 그만하려면 (q)키를");
		puts(" 누르세요.(Caps Lock을 확인하세요.)");
		puts("");

		StartOrQuit();
		
		//-----------------------------------검사시작------------------------------------
	    system("cls");
	    printf("\n 1. 나는 '첫눈에 반한다'는 것이 가능하다고 생각한다.");
        aTypeList[ROMANTIC].nScore += Input();
        system("cls");
	  	printf("\n 2. 나는 한참 지난 다음에야 비로소 내가 사랑하고 있음을 알았다.");
	  	aTypeList[FRIEND].nScore += Input();
	  	system("cls");
	  	printf("\n 3. 우리들 사이의 일이 잘 풀리지 않으면 나는 소화가 잘 되지"); 
	  	printf("\n    않는다.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 4. 현실적인 관점에서, 나는 사랑을 고백하기 전에 먼저 나의 장래");
	  	printf("\n    목표부터 생각해보지 않으면 안된다.");
		aTypeList[LOGICAL].nScore += Input();
	 	system("cls");
		printf("\n 5. 먼저 좋아하는 마음이 얼마 동안 있은 다음에 비로소 사랑이 ");
	  	printf("\n    생기게 되는 것이 원칙이다.");
	  	aTypeList[FRIEND].nScore += Input();
	  	system("cls");
	  	printf("\n 6. 애인에게 나의 태도를 다소 불확실하게 해두는 것이 언제나");
	  	printf("\n    좋다.");
	  	aTypeList[GAME].nScore += Input();
	  	system("cls");
	  	printf("\n 7. 우리가 처음 키스하거나 볼을 부볐을 때, 나는 성기에 뚜렷한");
	  	printf("\n    반응(흥분,축축함)이 오는 것을 느꼈다.");
	  	aTypeList[ROMANTIC].nScore += Input();
	  	system("cls");
	  	printf("\n 8. 전에 연애 상대였던 사람들 거의 모두와 나는 지금도 좋은 친구");
	  	printf("\n    관계를 잘 유지하고 있다.");
	  	aTypeList[FRIEND].nScore += Input();
	  	system("cls");
	  	printf("\n 9. 애인을 결정하기 전에 인생설계부터 잘 해두는 것이 좋다.");
	  	aTypeList[LOGICAL].nScore += Input();
	  	system("cls");
	  	printf("\n 10. 나는 연애에 실패한 후 너무나 우울해서 자살까지 생각해 본");
	  	printf("\n     적이 있다.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 11. 나는 사랑에 빠지면 하도 흥분되어 잠을 이루지 못할 때가");
	  	printf("\n     있다.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 12. 애인이 어려운 처지에 빠지면 설사 그가 바보처럼 행동한다");
	  	printf("\n     하더라도 힘껏 도와주려고 노력한다.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 13. 애인을 고통받게 하기보다는 차라리 내가 고통받겠다.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 14. 연애하는 재미란 두 사람간의 관계를 발전시키면서 동시에");
	  	printf("\n     내가 원하는 것을 거기서 얻어내는 재주를 시험해 보는 데");
	  	printf("\n     있다.");
	  	aTypeList[GAME].nScore += Input();
	  	system("cls");
	  	printf("\n 15. 사랑하는 애인이 나에 관해서 다소 모르는 것이 있다 하더라도");
	  	printf("\n     그것 때문에 그렇게 속상해 하지는 않을 것이다.");
	  	aTypeList[GAME].nScore += Input();
	  	system("cls");
	  	printf("\n 16. 비슷한 배경을 가진 사람끼리 사랑하는 것이 가장 좋다.");
	  	aTypeList[LOGICAL].nScore += Input();
	  	system("cls");
	  	printf("\n 17. 우리는 만나자 마자 서로가 좋아서 키스를 했다.");
	  	aTypeList[ROMANTIC].nScore += Input();
	  	system("cls");
	  	printf("\n 18. 애인이 나에게 관심을 보이지 않으면 나는 온몸이 쑤시고");
	  	printf("\n     아프다.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 19. 나의 애인이 행복하지 않으면 나도 결코 행복해질 수 없다.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 20. 대개 제일 먼저 나의 관심을 끄는 것은 그 사람의 외모이다.");
	  	aTypeList[ROMANTIC].nScore += Input();
	  	system("cls");
	  	printf("\n 21. 최상의 사랑은 오랜 기간의 우정으로부터 싹튼다.");
	  	aTypeList[FRIEND].nScore += Input();
	  	system("cls");
	  	printf("\n 22. 나는 사랑에 빠지면 다른 일에는 도무지 집중하기가 힘들다.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 23. 그(녀)의 손을 처음 잡았을 때 나는 사랑의 가능성을 감지했다.");
	  	aTypeList[ROMANTIC].nScore += Input();
	  	system("cls");
	  	printf("\n 24. 나는 어느 사람하고 헤어지고 나면 그 사람의 좋은 점을 발견");
	  	printf("\n     하려고 무진 애를 쓴다.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 25. 나의 애인이 다른 사람과 같이 있는 것 같은 생각이 들면");
	  	printf("\n     도무지 견딜 수 없다.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 26. 나의 애인 두 사람이 서로 알지 못하도록 교묘하게 재주부린");
	  	printf("\n     경험이 적어도 한 번은 있었다.");
	  	aTypeList[GAME].nScore += Input();
	  	system("cls");
	  	printf("\n 27. 나는 매우 쉽고 빠르게 사랑했던 관계를 잊어버릴 수 있다.");
	  	aTypeList[GAME].nScore += Input();
	  	system("cls");
	  	printf("\n 28. 애인을 결정하는데 한 가지 가장 고려해야 할 점은 그(녀)가");
	  	printf("\n     우리 가정을 어떻게 생각하는가 하는 것이다.");
	  	aTypeList[LOGICAL].nScore += Input();
	  	system("cls");
	  	printf("\n 29. 사랑하는 가장 좋은 것은 둘이 함께 살며, 함께 가정을 꾸미고");
	  	printf("\n     함께 아이를 키우는 것이다.");
	  	aTypeList[FRIEND].nScore += Input();
	  	system("cls");
	  	printf("\n 30. 애인이 원하는 것을 위해서라면 나는 기꺼이 내가 원하는 것을");
	  	printf("\n     희생시킬 수 있다.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 31. 배우자를 결정하는 데 있어 가장 먼저 고려해야 할 점은 ");
	  	printf("\n     그(녀)가 좋은 부모가 될 수 있겠는가 여부이다.");
	  	aTypeList[LOGICAL].nScore += Input();
	  	system("cls");
	  	printf("\n 32. 키스나 포옹이나 성관계는 서둘러서는 안된다. 그것들은 서로");
	  	printf("\n     충분히 친밀해지면 자연스럽게 이루어지는 것이다.");
	  	aTypeList[FRIEND].nScore += Input();
	  	system("cls");
	  	printf("\n 33. 나는 매력적인 사람들과 바람 피는 것을 좋아한다.");
	  	if(Input())	
	  	{
		 			aTypeList[GAME].nScore++;
	  				aTypeList[ROMANTIC].nScore++;
        }	
	  	system("cls");
	  	printf("\n 34. 다른 사람들과 나 사이에 있었던 일을 애인이 알게 된다면");
	  	printf("\n     매우 속상해할 것이다.");
	  	aTypeList[GAME].nScore += Input();
	  	system("cls");
	  	printf("\n 35. 나는 연애를 시작하기 전부터 나의 애인이 될 사람의 모습을");
	  	printf("\n     분명히 정해 놓고 있다.");
	  	aTypeList[ROMANTIC].nScore += Input();
	  	system("cls");
	  	printf("\n 36. 만일 나의 애인이 다른 사람의 아기를 갖고 있다면 나는 ");
	  	printf("\n     그 아이를 내 자식처럼 키우고 사랑하며 보살펴 줄 것이다.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 37. 우리가 언제부터 서로 사랑하게 되었는지 정확히 알 수 없다.");
	  	aTypeList[FRIEND].nScore += Input();
	  	system("cls");
	  	printf("\n 38. 나는 결혼하고 싶지 않은 사람하고는 진정한 사랑을 할 수");
	  	printf("\n     없을 것 같다.");
	  	aTypeList[LOGICAL].nScore += Input();
	  	system("cls");
	  	printf("\n 39. 나는 질투 같은 것을 하고 싶지 않지만, 나의 애인이 다른");
	  	printf("\n     사람에게 관심을 가진다면 참을 수 없을 것이다.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 40. 내가 애인에게 방해물이 된다면 차라리 나는 포기하겠다.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 41. 나는 내 애인과 똑같은 옷, 모자, 자전거, 자동차 등을 갖고 싶다.");
	  	aTypeList[ROMANTIC].nScore += Input();
	  	system("cls");
	  	printf("\n 42. 나는 연애하고 싶지 않은 사람하고는 데이트를 하고 싶지 않다.");
	  	aTypeList[LOGICAL].nScore += Input();
	  	system("cls");
	  	printf("\n 43. 우리들의 사랑은 이미 끝났다고 생각될 때도 그를 다시 보면");
	  	printf("\n     옛날 감정이 되살아나는 때가 적어도 한 번쯤은 있었다.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 44. 내가 가지고 있는 것은 무엇이든지 나의 애인이 마음대로");
	  	printf("\n     써도 좋다.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 45. 애인이 잠시라도 내게 무관심해지면 나는 그의 관심을 끌기");
	  	printf("\n     위하여 때로는 정말 바보 같은 짓도 할 때가 있다.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 46. 깊이 사귀고 싶지는 않아도 어떤 상대가 나의 데이트 신청에");
	  	printf("\n     응하는지를 시험해 보는 것도 재미있는 일이다.");
	  	aTypeList[GAME].nScore += Input();
	  	system("cls");
	  	printf("\n 47. 상대를 택할 때 고려해야 할 한 가지 중요한 점은 그(녀)가");
	  	printf("\n     자신의 직업을 어떻게 생각하는가 하는 것이다.");
	  	aTypeList[LOGICAL].nScore += Input();
	  	system("cls");
	  	printf("\n 48. 애인과 만나거나 전화한 지 한참 되었는데도 아무 소식이 ");
	  	printf("\n     없다면 그에게 그럴만한 이유가 있기 때문이다.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 49. 나는 누구와 깊게 사귀기 전에 우리가 아기를 가지게 될 경우");
	  	printf("\n     그쪽의 유전적 배경이 우리와 잘 맞는지부터 먼저 생각해 본다.");
	  	aTypeList[LOGICAL].nScore += Input();
	  	system("cls");
	  	printf("\n 50. 가장 좋은 연애 관계란 가장 오래 지속되는 관계이다.");
	  	aTypeList[FRIEND].nScore += Input();
	  	system("cls");
		
		//----------------------------------검사결과-----------------------------------

	  	printf("\n 검사가 모두 끝났습니다.\n\n 검사 결과를 산출중입니다.");
		
	    for(i=0;i<3;i++)			// 보여주기식 로딩화면 : 사용자의 기대감, 신뢰감 증가 효과 노림.
	  	{
	   		  gotoxy(26,3);
	  		  printf("    ");
	  		  gotoxy(26,3);
		      Sleep(500);
	  		  putchar('.'); 
	  		  Sleep(500);
	  		  putchar('.');	  					 
	  		  Sleep(500);
	  		  putchar('.');
	  		  Sleep(500);
	  		  putchar('.');	   	  		  
        }
		
	  	printf("\n\n 결과가 산출되었습니다. ");
	  	system("PAUSE");
	  	
		ConvertIntoPer(aTypeList);
		
	  	SortTypeList(aTypeList);
		
		nMaxNum = MaxNum(aTypeList);

		PrintResult(aTypeList, nMaxNum);

		puts("");
		system("PAUSE");

		puts("♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥");
		printf("\n\n검사가 모두 끝났습니다.\n\n");

		SaveOrNot(aTypeList);

		DoYouRepeat(&nRepeatFlag);

	} while (nRepeatFlag);
	puts("");
	return 0;
}

