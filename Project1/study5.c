#include <stdio.h> 
#pragma warning(disable:4996)

void main_x() {

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

	printf("����� %f �Դϴ�", sum);
}