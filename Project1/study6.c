#include <stdio.h> 
#pragma warning(disable:4996)

void main_f() {

	/*
	1. ���̰��� �����
   - ��Ģ�����ڸ� �̿��ؼ� �ε������� 2���� ���� �Է¹ް� ����� ����Ѵ�.
   - �Է��Լ��� scanf(), �����ڿ� ���� ������ �Ǵ��ؼ� ������ ����Ѵ�
   - if���� �̿��� ��
   - ��: ������ �Է��� �ּ��� : 1 + 2
	 ��� ���� 3.000 �Դϴ�
	*/

	int a = 0; char o = '\0'; int b = 0;
	puts("2���� ���� �̿��� ��Ģ������ �Է��ϼ���");

	scanf("%d%c%d", &a, &o, &b);

	int sum = 0;

	switch (o)
	{
		case 43 :
			sum = a + b;
		case 45 : 
			sum = a - b;
		case 42:
			sum = a * b;
		case 47 : 
			sum = a / b;
	}

	printf("����� %d �Դϴ�", sum);
}