#include <stdio.h> 
#pragma warning(disable:4996)
#include <stdlib.h> // rand() �Լ�
#include <time.h>   // time() �Լ�
/*
3. ���� �ӽ� ���Ӹ����
   - ������ ���� �ð��� �Է��Ѵ� ( �����ݺ�Ƚ�� )
   - ������ 3�� ( 0~9 ), �� ������ ������ �߻�
   - �⺻���� 50
   - 7 7 7�� �ְ����� 1000
   - ���� 3���� ��� ������ 100
   - ���� 2���� ������ 10
   - ��� Ʋ���� -1
   - ������ 0�� �Ǹ� ���ӿ���
   - ������ ���� �ð��� 0�̸� ������ ���� ���ڸ� ������ ���� ���
   - system("cls");  �� ��üȭ�� ����� or printf("\r %d %d %d"); �� ���� �κи� �����
*/
void main_0920_3() {

	int randoma = 0;
	int randomb = 0;
	int randomc = 0;

	//// ����� ���� �ٸ� ���� �߻���Ű�� ���� �ð��� ����
	//// ���α׷� ����� ���� �ѹ��� ���ش�
	srand((unsigned)time(NULL));

	//// ������ �������� 1~10������ ������ �߻�
	int select = 0;
	int score = 50;

	while (1)
	{
		if (score <= 0) {
			printf("������ 0���� �Ǿ����ϴ�!.\n");
			exit(0);
		}

		printf("�޴� ����\n");
		printf("1. ���Ըӽ� ������ 2. ����Ȯ�� 3. ��������\n");
		scanf("%d", &select);

		if (select == 1) {
			printf("���Ըӽ� �۵���....\n");
			printf("���Ըӽ��� 2�ʿ� �ѹ� ���ϴ�.\n");

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
				printf("1000�� ȹ��!!!!\n");
			}
			if (randoma == randomb && randomb == randomc) {
				score += 100;
				printf("100�� ȹ��!!!!\n");
			}
			else if (randoma == randomb || randomb == randomc) {
				score += 10;
				printf("10�� ȹ��\n");
			}
			else {
				score -= 10;
				printf("10�� ����\n");
			}
		}

		if (select == 2) {
			printf("������ %d�Դϴ�.\n", score);
		}
		if (select == 3) {
			printf("������ �����մϴ�.\n");
			exit(0);
		}

		
	}

	

	
	

	



}