#include <stdio.h>
#include <stdlib.h> // rand() 함수
#include <conio.h>  // getch() 함수
#include <time.h>   // time() 함수

void main_h()
{
	int  nRandom;
	printf(">> 리턴키를 누르면 난수가 발생합니다 ( 0 ~ 7 ) << ");

	int get = _getch();

	// 4. 14번 예제에서 리턴키가 아닌 키를 입력하면 프로그램이 아무것도 출력되지 않고 종료 되게 만들어본다.
	if (get != 13) {
		exit(0);
	}

	printf("\n");

	//// 실행시 마다 다른 수를 발생시키기 위해 시간을 적용
	//// 프로그램 실행시 최초 한번만 해준다
	srand((unsigned)time(NULL));

	//// 나머지 연산으로 0~7까지의 난수를 발생
	nRandom = rand() % 8;

	if (nRandom == 0)
		puts("난수는 0입니다");
	else if (nRandom == 1)
		puts("난수는 1입니다");
	else if (nRandom == 2)
		puts("난수는 2입니다");
	else if (nRandom == 3)
		puts("난수는 3입니다");
	else if (nRandom >= 4 && nRandom <= 5)
		puts("난수는 4 ~ 5입니다");
	else
		puts("난수는 6 ~ 7입니다");
}