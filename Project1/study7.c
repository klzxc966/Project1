#include <stdio.h>
#include <stdlib.h> // rand() �Լ�
#include <conio.h>  // getch() �Լ�
#include <time.h>   // time() �Լ�
#pragma warning(disable:4996)

/*
3. ���� ���߱� ���Ӹ����
   - ��ǻ�Ͱ� �߻���Ų ������ ���� �÷��̾ ���ߴ� ����
   - ���� ������ 1���� 10����
   - �õ� Ƚ���� 2ȸ
   - ù��° �Է½� �Է��� ���� �������� �۰ų� ū ��� ��Ʈ�� �˷��ش�
   - ��: ������ 3
		 �Է��� ���� 5
		 5���� �۽��ϴ�
   - ���� ��Ʈ�� ���� �� ���� ��Ʈ�� ����.
   - ��: ������ 1
		 �Է��� ���� 2
*/


void main()
{
	int  nRandom;
	printf("���ڸ��߱� ������ �����մϴ�. ( 1 ~ 10 ) << \n");

	//// ����� ���� �ٸ� ���� �߻���Ű�� ���� �ð��� ����
	//// ���α׷� ����� ���� �ѹ��� ���ش�
	srand((unsigned)time(NULL));

	//// ������ �������� 1~10������ ������ �߻�
	nRandom = (rand() % 10) +1;

	int num = 0;
	int cnt = 0;
	

	SPoint:
	if (cnt == 2) {
		exit(0);
		printf("��������");
	}

	printf("1~10 ������ ���ڸ� �Է�������.");
	scanf("%d", &num);
	
	if (num < nRandom) {
		printf("��!");
		cnt++;
		goto SPoint;
	}
	if (num > nRandom) {
		printf("�ٿ�!");
		cnt++;
		goto SPoint;
	}
	if (num == nRandom) {
		printf("�����Դϴ�!");
		cnt++;
		exit(0);
	}

}