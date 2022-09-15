#include <stdio.h> 

// 메인 함수 : 프로그램의 최초 진입점 ( Entry Point )
//             항상 중괄호의 시작과 끝으로 표시된다.

void main_c(void)
{
	/* 수업과제1: arrEx2의 초기화 방식을 char, float 자료형으로 선언해서 그에 맞게 값을
	대입 한 뒤 그에 맞는 서식 지정자를 이용하여 printf로 출력 해볼것 */

	// int n[4] = { 1, 2, 3, 4 };
	char charr[4] = { 'A', 'B', 'C', 'D' };
	float farr[4] = { 2.2f, 7.2f, 17.1f, 9.5f };

	printf("char형 배열 출력: %c %c %c %c\n", charr[0], charr[1], charr[2], charr[3]);
	printf("float형 배열 출력: %f %f %f %f\n", farr[0], farr[1], farr[2], farr[3]);

	/* 수업과제2: int, float형 배열을 char형의 '값'(ex 'a') 으로
	집어넣었을때 int 와 float 의 서식지정자를 이용하여 printf로 출력 해볼것 */

	int narr[] = { 'a', 'A', 'n', 'N'};
	float farr2[] = { 'b', 'B', 'c', 'C'};

	printf("int형 출력: %d %d %d %d\n",narr[0], narr[1], narr[2], narr[3]);
	printf("float형 출력: %f %f %f %f\n", farr2[0], farr2[1], farr2[2], farr2[3]);

	/* 수업과제3 : char string[]로 선언 및 값을 대입 한 뒤 배열안의 값들을 한개씩 
	서식지정자(%c)를 이용하여 printf로 출력 해볼것 */

	char name[] = {'A', 'n', 'G', 'y','u','\0'};
	printf("%c%c %c%c%c%c", name[0], name[1], name[2], name[3], name[4], name[5]);
}
