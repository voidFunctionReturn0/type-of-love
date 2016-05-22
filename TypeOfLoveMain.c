/*
������Ʈ�� : ����� ���� �˻�

�����Ϸ� : Dev C++ 

���� OS : Windows  

���� : 50���� ������ ���� ���� ���� �ڽ��� 6���� ����� ���� ��
      � ������ ���ϴ� �� �˾ƺ��� ���α׷�.

�Է� : �� ������ ���� �׷���('o') Ȥ�� �ƴϴ�('x') �� �ϳ��� ���Ѵ�.

��� : �˻� ����� ���� �ڽ��� ����� ������ ���� ������� ���� ���� ������ ����
      ������ ����Ѵ�. �߰� ���û������� ���� ���� ������ �ƴ� ������ ������
      ���� ���� ����� �� �� �ִ�. �˻����� �޸������� ������ ���� �ִ�.
���� : �ش� ������ ���� 'o'�� ���, ������ ���� ������ ������ 1�� �ø���.
	  ��� ������ ���� ���� �Ϸ�Ǹ� 6���� ������ ���� ������ ������� ���Ѵ�.
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
		printf("\n\t\t\t[ ����� ���� �˻� ]\n\n");
		puts(" *�����е��� ����̶� � ���̶�� �����ϼ���? �����е���");
		puts(" ��ҿ� ���� �ִ� �����̳� �µ��� ���� ����� ������ �����");
		puts(" �ּ���. ���׿� ���� ������ '�׷���(o)Ű' Ȥ�� '�ƴϴ�(x)Ű'�θ�");
		puts(" ���ؾ� �մϴ�. ������ �� 50�����Դϴ�. �߰��� �׸��Ϸ��� (q)Ű��");
		puts(" ��������.(Caps Lock�� Ȯ���ϼ���.)");
		puts("");

		StartOrQuit();
		
		//-----------------------------------�˻����------------------------------------
	    system("cls");
	    printf("\n 1. ���� 'ù���� ���Ѵ�'�� ���� �����ϴٰ� �����Ѵ�.");
        aTypeList[ROMANTIC].nScore += Input();
        system("cls");
	  	printf("\n 2. ���� ���� ���� �������� ��μ� ���� ����ϰ� ������ �˾Ҵ�.");
	  	aTypeList[FRIEND].nScore += Input();
	  	system("cls");
	  	printf("\n 3. �츮�� ������ ���� �� Ǯ���� ������ ���� ��ȭ�� �� ����"); 
	  	printf("\n    �ʴ´�.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 4. �������� ��������, ���� ����� ����ϱ� ���� ���� ���� �巡");
	  	printf("\n    ��ǥ���� �����غ��� ������ �ȵȴ�.");
		aTypeList[LOGICAL].nScore += Input();
	 	system("cls");
		printf("\n 5. ���� �����ϴ� ������ �� ���� ���� ������ ��μ� ����� ");
	  	printf("\n    ����� �Ǵ� ���� ��Ģ�̴�.");
	  	aTypeList[FRIEND].nScore += Input();
	  	system("cls");
	  	printf("\n 6. ���ο��� ���� �µ��� �ټ� ��Ȯ���ϰ� �صδ� ���� ������");
	  	printf("\n    ����.");
	  	aTypeList[GAME].nScore += Input();
	  	system("cls");
	  	printf("\n 7. �츮�� ó�� Ű���ϰų� ���� �κ��� ��, ���� ���⿡ �ѷ���");
	  	printf("\n    ����(���,������)�� ���� ���� ������.");
	  	aTypeList[ROMANTIC].nScore += Input();
	  	system("cls");
	  	printf("\n 8. ���� ���� ��뿴�� ����� ���� ��ο� ���� ���ݵ� ���� ģ��");
	  	printf("\n    ���踦 �� �����ϰ� �ִ�.");
	  	aTypeList[FRIEND].nScore += Input();
	  	system("cls");
	  	printf("\n 9. ������ �����ϱ� ���� �λ�������� �� �صδ� ���� ����.");
	  	aTypeList[LOGICAL].nScore += Input();
	  	system("cls");
	  	printf("\n 10. ���� ���ֿ� ������ �� �ʹ��� ����ؼ� �ڻ���� ������ ��");
	  	printf("\n     ���� �ִ�.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 11. ���� ����� ������ �ϵ� ��еǾ� ���� �̷��� ���� ����");
	  	printf("\n     �ִ�.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 12. ������ ����� ó���� ������ ���� �װ� �ٺ�ó�� �ൿ�Ѵ�");
	  	printf("\n     �ϴ��� ���� �����ַ��� ����Ѵ�.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 13. ������ ����ް� �ϱ⺸�ٴ� ���� ���� ����ްڴ�.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 14. �����ϴ� ��̶� �� ������� ���踦 ������Ű�鼭 ���ÿ�");
	  	printf("\n     ���� ���ϴ� ���� �ű⼭ ���� ���ָ� ������ ���� ��");
	  	printf("\n     �ִ�.");
	  	aTypeList[GAME].nScore += Input();
	  	system("cls");
	  	printf("\n 15. ����ϴ� ������ ���� ���ؼ� �ټ� �𸣴� ���� �ִ� �ϴ���");
	  	printf("\n     �װ� ������ �׷��� �ӻ��� ������ ���� ���̴�.");
	  	aTypeList[GAME].nScore += Input();
	  	system("cls");
	  	printf("\n 16. ����� ����� ���� ������� ����ϴ� ���� ���� ����.");
	  	aTypeList[LOGICAL].nScore += Input();
	  	system("cls");
	  	printf("\n 17. �츮�� ������ ���� ���ΰ� ���Ƽ� Ű���� �ߴ�.");
	  	aTypeList[ROMANTIC].nScore += Input();
	  	system("cls");
	  	printf("\n 18. ������ ������ ������ ������ ������ ���� �¸��� ���ð�");
	  	printf("\n     ������.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 19. ���� ������ �ູ���� ������ ���� ���� �ູ���� �� ����.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 20. �밳 ���� ���� ���� ������ ���� ���� �� ����� �ܸ��̴�.");
	  	aTypeList[ROMANTIC].nScore += Input();
	  	system("cls");
	  	printf("\n 21. �ֻ��� ����� ���� �Ⱓ�� �������κ��� ��ư��.");
	  	aTypeList[FRIEND].nScore += Input();
	  	system("cls");
	  	printf("\n 22. ���� ����� ������ �ٸ� �Ͽ��� ������ �����ϱⰡ �����.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 23. ��(��)�� ���� ó�� ����� �� ���� ����� ���ɼ��� �����ߴ�.");
	  	aTypeList[ROMANTIC].nScore += Input();
	  	system("cls");
	  	printf("\n 24. ���� ��� ����ϰ� ������� ���� �� ����� ���� ���� �߰�");
	  	printf("\n     �Ϸ��� ���� �ָ� ����.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 25. ���� ������ �ٸ� ����� ���� �ִ� �� ���� ������ ���");
	  	printf("\n     ������ �ߵ� �� ����.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 26. ���� ���� �� ����� ���� ���� ���ϵ��� �����ϰ� ���ֺθ�");
	  	printf("\n     ������ ��� �� ���� �־���.");
	  	aTypeList[GAME].nScore += Input();
	  	system("cls");
	  	printf("\n 27. ���� �ſ� ���� ������ ����ߴ� ���踦 �ؾ���� �� �ִ�.");
	  	aTypeList[GAME].nScore += Input();
	  	system("cls");
	  	printf("\n 28. ������ �����ϴµ� �� ���� ���� ����ؾ� �� ���� ��(��)��");
	  	printf("\n     �츮 ������ ��� �����ϴ°� �ϴ� ���̴�.");
	  	aTypeList[LOGICAL].nScore += Input();
	  	system("cls");
	  	printf("\n 29. ����ϴ� ���� ���� ���� ���� �Բ� ���, �Բ� ������ �ٹ̰�");
	  	printf("\n     �Բ� ���̸� Ű��� ���̴�.");
	  	aTypeList[FRIEND].nScore += Input();
	  	system("cls");
	  	printf("\n 30. ������ ���ϴ� ���� ���ؼ���� ���� �Ⲩ�� ���� ���ϴ� ����");
	  	printf("\n     �����ų �� �ִ�.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 31. ����ڸ� �����ϴ� �� �־� ���� ���� ����ؾ� �� ���� ");
	  	printf("\n     ��(��)�� ���� �θ� �� �� �ְڴ°� �����̴�.");
	  	aTypeList[LOGICAL].nScore += Input();
	  	system("cls");
	  	printf("\n 32. Ű���� �����̳� ������� ���ѷ����� �ȵȴ�. �װ͵��� ����");
	  	printf("\n     ����� ģ�������� �ڿ������� �̷������ ���̴�.");
	  	aTypeList[FRIEND].nScore += Input();
	  	system("cls");
	  	printf("\n 33. ���� �ŷ����� ������ �ٶ� �Ǵ� ���� �����Ѵ�.");
	  	if(Input())	
	  	{
		 			aTypeList[GAME].nScore++;
	  				aTypeList[ROMANTIC].nScore++;
        }	
	  	system("cls");
	  	printf("\n 34. �ٸ� ������ �� ���̿� �־��� ���� ������ �˰� �ȴٸ�");
	  	printf("\n     �ſ� �ӻ����� ���̴�.");
	  	aTypeList[GAME].nScore += Input();
	  	system("cls");
	  	printf("\n 35. ���� ���ָ� �����ϱ� ������ ���� ������ �� ����� �����");
	  	printf("\n     �и��� ���� ���� �ִ�.");
	  	aTypeList[ROMANTIC].nScore += Input();
	  	system("cls");
	  	printf("\n 36. ���� ���� ������ �ٸ� ����� �Ʊ⸦ ���� �ִٸ� ���� ");
	  	printf("\n     �� ���̸� �� �ڽ�ó�� Ű��� ����ϸ� ������ �� ���̴�.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 37. �츮�� �������� ���� ����ϰ� �Ǿ����� ��Ȯ�� �� �� ����.");
	  	aTypeList[FRIEND].nScore += Input();
	  	system("cls");
	  	printf("\n 38. ���� ��ȥ�ϰ� ���� ���� ����ϰ�� ������ ����� �� ��");
	  	printf("\n     ���� �� ����.");
	  	aTypeList[LOGICAL].nScore += Input();
	  	system("cls");
	  	printf("\n 39. ���� ���� ���� ���� �ϰ� ���� ������, ���� ������ �ٸ�");
	  	printf("\n     ������� ������ �����ٸ� ���� �� ���� ���̴�.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 40. ���� ���ο��� ���ع��� �ȴٸ� ���� ���� �����ϰڴ�.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 41. ���� �� ���ΰ� �Ȱ��� ��, ����, ������, �ڵ��� ���� ���� �ʹ�.");
	  	aTypeList[ROMANTIC].nScore += Input();
	  	system("cls");
	  	printf("\n 42. ���� �����ϰ� ���� ���� ����ϰ�� ����Ʈ�� �ϰ� ���� �ʴ�.");
	  	aTypeList[LOGICAL].nScore += Input();
	  	system("cls");
	  	printf("\n 43. �츮���� ����� �̹� �����ٰ� ������ ���� �׸� �ٽ� ����");
	  	printf("\n     ���� ������ �ǻ�Ƴ��� ���� ��� �� ������ �־���.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 44. ���� ������ �ִ� ���� �����̵��� ���� ������ �������");
	  	printf("\n     �ᵵ ����.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 45. ������ ��ö� ���� ������������ ���� ���� ������ ����");
	  	printf("\n     ���Ͽ� ���δ� ���� �ٺ� ���� ���� �� ���� �ִ�.");
	  	aTypeList[POSSESSIVE].nScore += Input();
	  	system("cls");
	  	printf("\n 46. ���� ��Ͱ� ������ �ʾƵ� � ��밡 ���� ����Ʈ ��û��");
	  	printf("\n     ���ϴ����� ������ ���� �͵� ����ִ� ���̴�.");
	  	aTypeList[GAME].nScore += Input();
	  	system("cls");
	  	printf("\n 47. ��븦 ���� �� ����ؾ� �� �� ���� �߿��� ���� ��(��)��");
	  	printf("\n     �ڽ��� ������ ��� �����ϴ°� �ϴ� ���̴�.");
	  	aTypeList[LOGICAL].nScore += Input();
	  	system("cls");
	  	printf("\n 48. ���ΰ� �����ų� ��ȭ�� �� ���� �Ǿ��µ��� �ƹ� �ҽ��� ");
	  	printf("\n     ���ٸ� �׿��� �׷����� ������ �ֱ� �����̴�.");
	  	aTypeList[UNSELFISH].nScore += Input();
	  	system("cls");
	  	printf("\n 49. ���� ������ ��� ��ͱ� ���� �츮�� �Ʊ⸦ ������ �� ���");
	  	printf("\n     ������ ������ ����� �츮�� �� �´������� ���� ������ ����.");
	  	aTypeList[LOGICAL].nScore += Input();
	  	system("cls");
	  	printf("\n 50. ���� ���� ���� ����� ���� ���� ���ӵǴ� �����̴�.");
	  	aTypeList[FRIEND].nScore += Input();
	  	system("cls");
		
		//----------------------------------�˻���-----------------------------------

	  	printf("\n �˻簡 ��� �������ϴ�.\n\n �˻� ����� �������Դϴ�.");
		
	    for(i=0;i<3;i++)			// �����ֱ�� �ε�ȭ�� : ������� ��밨, �ŷڰ� ���� ȿ�� �븲.
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
		
	  	printf("\n\n ����� ����Ǿ����ϴ�. ");
	  	system("PAUSE");
	  	
		ConvertIntoPer(aTypeList);
		
	  	SortTypeList(aTypeList);
		
		nMaxNum = MaxNum(aTypeList);

		PrintResult(aTypeList, nMaxNum);

		puts("");
		system("PAUSE");

		puts("��������������������������������������������������������������������������������");
		printf("\n\n�˻簡 ��� �������ϴ�.\n\n");

		SaveOrNot(aTypeList);

		DoYouRepeat(&nRepeatFlag);

	} while (nRepeatFlag);
	puts("");
	return 0;
}

