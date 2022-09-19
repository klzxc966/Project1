#include <stdio.h>
#include <stdlib.h> // rand() 함수
#include <conio.h>  // getch() 함수
#include <time.h>   // time() 함수
#pragma warning(disable:4996)

/*
3. 숫자 맞추기 게임만들기
   - 컴퓨터가 발생시킨 임의의 수를 플레이어가 맞추는 게임
   - 난수 범위는 1부터 10까지
   - 시도 횟수는 2회
   - 첫번째 입력시 입력한 수를 기준으로 작거나 큰 경우 힌트를 알려준다
   - 예: 난수는 3
		 입력한 수는 5
		 5보다 작습니다
   - 만약 힌트가 답이 될 경우는 힌트가 없다.
   - 예: 난수는 1
		 입력한 수는 2
*/


void main()
{
	int  nRandom;
	printf("숫자맞추기 게임을 시작합니다. ( 1 ~ 10 ) << \n");

	//// 실행시 마다 다른 수를 발생시키기 위해 시간을 적용
	//// 프로그램 실행시 최초 한번만 해준다
	srand((unsigned)time(NULL));

	//// 나머지 연산으로 1~10까지의 난수를 발생
	nRandom = (rand() % 10) +1;

	int num = 0;
	int cnt = 0;
	

	SPoint:
	if (cnt == 2) {
		exit(0);
		printf("게임종료");
	}

	printf("1~10 사이의 숫자를 입력히세요.");
	scanf("%d", &num);
	
	if (num < nRandom) {
		printf("업!");
		cnt++;
		goto SPoint;
	}
	if (num > nRandom) {
		printf("다운!");
		cnt++;
		goto SPoint;
	}
	if (num == nRandom) {
		printf("정답입니다!");
		cnt++;
		exit(0);
	}

}