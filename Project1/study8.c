#include <stdio.h>
#include <stdlib.h> // rand() �Լ�
#include <conio.h>  // getch() �Լ�
#include <time.h>   // time() �Լ�

void main_h()
{
	int  nRandom;
	printf(">> ����Ű�� ������ ������ �߻��մϴ� ( 0 ~ 7 ) << ");

	int get = _getch();

	// 4. 14�� �������� ����Ű�� �ƴ� Ű�� �Է��ϸ� ���α׷��� �ƹ��͵� ��µ��� �ʰ� ���� �ǰ� ������.
	if (get != 13) {
		exit(0);
	}

	printf("\n");

	//// ����� ���� �ٸ� ���� �߻���Ű�� ���� �ð��� ����
	//// ���α׷� ����� ���� �ѹ��� ���ش�
	srand((unsigned)time(NULL));

	//// ������ �������� 0~7������ ������ �߻�
	nRandom = rand() % 8;

	if (nRandom == 0)
		puts("������ 0�Դϴ�");
	else if (nRandom == 1)
		puts("������ 1�Դϴ�");
	else if (nRandom == 2)
		puts("������ 2�Դϴ�");
	else if (nRandom == 3)
		puts("������ 3�Դϴ�");
	else if (nRandom >= 4 && nRandom <= 5)
		puts("������ 4 ~ 5�Դϴ�");
	else
		puts("������ 6 ~ 7�Դϴ�");
}