/*
2. 숫자 맞추기2 게임만들기
   - 기존의 숫자맞추기 게임과 동일
   - 시도 횟수는 3회, 3회에 맞추지 못하면 종료
   - 점수 변수를 두어 맞출때마다 10점씩 증가
   - 루프
*/

#include <stdio.h>
#include <stdlib.h> // rand() 함수
#include <time.h>   // time() 함수
#pragma warning(disable:4996)

void main_0920_2()
{
	int  nRandom;
	printf("숫자맞추기 게임을 시작합니다. ( 1 ~ 10 ) << \n");

	//// 실행시 마다 다른 수를 발생시키기 위해 시간을 적용
	//// 프로그램 실행시 최초 한번만 해준다
	srand((unsigned)time(NULL));

	//// 나머지 연산으로 1~10까지의 난수를 발생
	nRandom = (rand() % 10) + 1;

	int num = 0;
	int score = 0;

	while (1)
	{
		score = 0;
		nRandom = (rand() % 10) + 1;

		for (int i = 0; i < 3; i++) {
			printf("1~10 사이의 숫자를 입력히세요.");
			scanf("%d", &num);

			if (num < nRandom) {
				printf("업!\n");
			}
			if (num > nRandom) {
				printf("다운!\n");
			}
			if (num == nRandom) {
				score += 10;
				printf("정답입니다!\n");
				break;
			}
		}
		printf("새로시작!\n");
	}
}