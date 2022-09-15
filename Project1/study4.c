#include <stdio.h>
#pragma warning(disable:4996)

void main()
{
	// 과제1 : opEx4_10의 과정을 순서대로 나열. 주석을 사용하여 결과를 증명한다. 
	int a, b, c, e, f;

	a = 0;
	b = 5;
	c = 10;
	e = c > b ? b * ++c - 10 * 2 : c-- * b + 10 * 2;
	/*
	c는 10이므로 b보다 크다. 조건문이 참이므로 e는 b * ++c - 10 * 2 이다. c의 증감연산자는 전위형이므로 
	c는 11이 된 후 계산한다. 5*11-10*2 = 35이다.
	*/ 
	f = 10 == c ? b * ++c - 10 * 2 : c-- * b + 10 * 2;
	/*
	c는 10과 같다. 조건문이 참이므로 f는 b * ++c - 10 * 2 이다. c의 증감연산자는 전위형이므로 
	c는 12가 된 후 계산한다. 5*12-10*2 = 40이다.
	*/

	/* 과제2: 정수형으로 2개의 배열을 선언, 배열의 크기는 4 ( ex: int nOP1[4], nOP2[4]; )
            부동형으로 2개의 배열을 선언, 배열의 크기는 4 ( ex: float fOP1[4], fOP2[4]; )
            각 배열의 요소 값을 전부 입력 받는다. (scanf)
            연산결과는 각 데이터형에 맞는 변수에 저장한다. 
            # 저장 방법은 두가지
            - 첫번째. 새로운 배열을 만들어서 결과값을 집어넣는다.
            - 두번째. 기존에 선언된 배열에 결과값을 집어넣는다.
            1 - 첫번째 배열요소는 서로 더하고, 두번째는 빼고, 세번째는 곱하고, 네번째는 나눈다
	    ex( nOP[0] + nOP2[0], nOP[1] - nOP2[1] ...  )
            2 - 부동형은 사칙연산을 하되 연산할 변수들을 각각 int로 캐스트해서 연산한다. (캐스팅연습)  
                당연히 값은 int 로 받아야한다.
        ex( (int)fOP[0] + (int)fOP2[0] ) 
	*/

	int narr1[4];
	int narr2[4];
	printf("4개의 정수를 입력하시오\n");
	scanf("%d %d %d %d", &narr1[0], &narr1[1], &narr1[2], &narr1[3]);
	printf("입력 되었습니다\n");
	printf("4개의 정수를 입력하시오\n");
	scanf("%d %d %d %d", &narr2[0], &narr2[1], &narr2[2], &narr2[3]);
	printf("입력 되었습니다\n");
	
	float farr1[4];
	float farr2[4];
	printf("4개의 실수를 입력하시오\n");
	scanf("%f %f %f %f", &farr1[0], &farr1[1], &farr1[2], &farr1[3]);
	printf("입력 되었습니다\n");
	printf("4개의 실수를 입력하시오\n");
	scanf("%f %f %f %f", &farr2[0], &farr2[1], &farr2[2], &farr2[3]);
	printf("입력 되었습니다\n");

	int narr3[4] = {narr1[0]+narr2[0], narr1[1]-narr2[1], 
					narr1[2]*narr2[2], narr1[3]/narr2[3]};
	float farr3[4] = { (int)farr1[0] + (int)farr2[0], (int)farr1[1] - (int)farr2[1],
					   (int)farr1[2] * (int)farr2[2], (int)farr1[3] / (int)farr2[3] };

	for (int i = 0; i < 4; i++) {
		printf("%d\t", narr3[i]);
	}
		printf("\n");
	for (int i = 0; i < 4; i++) {
		printf("%f\t", farr3[i]);
	}
}
