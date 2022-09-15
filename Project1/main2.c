#include <stdio.h>
#pragma warning(disable:4996)

void main_b() {

	char cdata = 'a';
	int ndata = 0;
	long ldata = 0;
	float fdata = 0.0f;
	double ddata = 0.0;
	long double lddata = 0;
	unsigned int undata = 0;
	unsigned long uldata = 0;

	printf("문자값을 입력하세요\n");
	scanf("%c", &cdata);

	printf("정수값을 입력하세요\n");
	scanf("%d", &ndata);

	printf("정수값을 입력하세요\n");
	scanf("%d", &ldata);

	printf("실수값을 입력하세요\n");
	scanf("%f", &fdata);

	printf("실수값을 입력하세요\n");
	scanf("%f", &ddata);

	printf("실수값을 입력하세요\n");
	scanf("%f", &lddata);

	printf("양의 정수값을 입력하세요\n");
	scanf("%d", &undata);

	printf("양의 정수값을 입력하세요\n");
	scanf("%d", &uldata);


	/* 수업과제2: 과제 1에서 입력 받은 모든 값을 자료형 상관없이 10진수와 16진수로 출력한다.
	정렬방식은 좌정렬, 우정렬 2가지 자유롭게 출력해본다.*/

	printf("char, 10진수: %05d, 16진수: %-5x\n", cdata, cdata);
	printf("int, 10진수: %05d, 16진수: %-5x\n", ndata, ndata);
	printf("long, 10진수: %05d, 16진수: %-5x\n", ldata, ldata);
	printf("float, 10진수: %05d, 16진수: %-5x\n", fdata, fdata);
	printf("double, 10진수: %05d, 16진수: %-5x\n", ddata, ddata);
	printf("long double, 10진수: %05d, 16진수: %-5x\n", lddata, lddata);
	printf("unsigned int, 10진수: %05d, 16진수: %-5x\n", undata, undata);
	printf("unsigned long, 10진수: %05d, 16진수: %-5x\n", uldata, uldata);
	// 출력용
}