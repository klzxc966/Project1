/*
2. ���� ���߱�2 ���Ӹ����
   - ������ ���ڸ��߱� ���Ӱ� ����
   - �õ� Ƚ���� 3ȸ, 3ȸ�� ������ ���ϸ� ����
   - ���� ������ �ξ� ���⶧���� 10���� ����
   - ����
*/

#include <stdio.h>
#include <stdlib.h> // rand() �Լ�
#include <time.h>   // time() �Լ�
#pragma warning(disable:4996)

void main_0920_2()
{
	int  nRandom;
	printf("���ڸ��߱� ������ �����մϴ�. ( 1 ~ 10 ) << \n");

	//// ����� ���� �ٸ� ���� �߻���Ű�� ���� �ð��� ����
	//// ���α׷� ����� ���� �ѹ��� ���ش�
	srand((unsigned)time(NULL));

	//// ������ �������� 1~10������ ������ �߻�
	nRandom = (rand() % 10) + 1;

	int num = 0;
	int score = 0;

	while (1)
	{
		score = 0;
		nRandom = (rand() % 10) + 1;

		for (int i = 0; i < 3; i++) {
			printf("1~10 ������ ���ڸ� �Է�������.");
			scanf("%d", &num);

			if (num < nRandom) {
				printf("��!\n");
			}
			if (num > nRandom) {
				printf("�ٿ�!\n");
			}
			if (num == nRandom) {
				score += 10;
				printf("�����Դϴ�!\n");
				break;
			}
		}
		printf("���ν���!\n");
	}
}