#include <stdio.h> 
#pragma warning(disable:4996)
#include <stdlib.h> // rand() 함수
#include <time.h>   // time() 함수
/*
3. 슬롯 머신 게임만들기
   - 레버를 당기는 시간을 입력한다 ( 루프반복횟수 )
   - 슬롯은 3개 ( 0~9 ), 각 슬롯은 난수를 발생
   - 기본점수 50
   - 7 7 7면 최고점수 1000
   - 슬롯 3개가 모두 같으면 100
   - 슬롯 2개가 같으면 10
   - 모두 틀리면 -1
   - 점수가 0이 되면 게임오버
   - 레버를 당기는 시간이 0이면 마지막 나온 숫자를 가지고 점수 계산
   - system("cls");  로 전체화면 지우기 or printf("\r %d %d %d"); 로 슬롯 부분만 지우기
*/
void main_0920_3() {

	int randoma = 0;
	int randomb = 0;
	int randomc = 0;

	//// 실행시 마다 다른 수를 발생시키기 위해 시간을 적용
	//// 프로그램 실행시 최초 한번만 해준다
	srand((unsigned)time(NULL));

	//// 나머지 연산으로 1~10까지의 난수를 발생
	int select = 0;
	int score = 50;

	while (1)
	{
		if (score <= 0) {
			printf("점수가 0점이 되었습니다!.\n");
			exit(0);
		}

		printf("메뉴 선택\n");
		printf("1. 슬롯머신 돌리기 2. 점수확인 3. 게임종료\n");
		scanf("%d", &select);

		if (select == 1) {
			printf("슬롯머신 작동중....\n");
			printf("슬롯머신은 2초에 한번 돕니다.\n");

			printf("\n");

			for (int i = 0; i <= 9; i++)
			{
				randoma = (rand() % 10);
				randomb = (rand() % 10);
				randomc = (rand() % 10);

				_sleep(200);
				printf("\r [%d], [%d], [%d]", randoma, randomb, randomc);
			}
			printf("\n");
			if (randoma == 7 && randomb == 7 && randomc == 7) {
				score += 1000;
				printf("1000점 획득!!!!\n");
			}
			if (randoma == randomb && randomb == randomc) {
				score += 100;
				printf("100점 획득!!!!\n");
			}
			else if (randoma == randomb || randomb == randomc) {
				score += 10;
				printf("10점 획득\n");
			}
			else {
				score -= 10;
				printf("10점 감소\n");
			}
		}

		if (select == 2) {
			printf("점수는 %d입니다.\n", score);
		}
		if (select == 3) {
			printf("게임을 종료합니다.\n");
			exit(0);
		}

		
	}

	

	
	

	



}