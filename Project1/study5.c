#include <stdio.h> 
#pragma warning(disable:4996)

void main_x() {

	/*
	1. 간이계산기 만들기
   - 사칙연산자를 이용해서 부동형으로 2개의 수를 입력받고 결과를 출력한다.
   - 입력함수는 scanf(), 연산자에 따라 조건을 판단해서 계산식을 출력한다
   - if문을 이용할 것
   - 예: 계산식을 입력해 주세요 : 1 + 2 
     결과 값은 3.000 입니다
	*/

	int a = 0; char o = '\0'; int b = 0;
	puts("2개의 수를 이용한 사칙연산을 입력하세요");

	scanf("%d%c%d", &a, &o, &b);
	
	float sum = 0.0f;

	if (o == 43) {
		sum = a + b;
	}
	else if (o == 45) {
		sum = a - b;
	}
	else if (o == 42) {
		sum = a * b;
	}
	else if (o == 47) {
		sum = a / b;
	}

	printf("결과는 %f 입니다", sum);
}