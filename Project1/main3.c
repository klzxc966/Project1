#include <stdio.h> 

// ���� �Լ� : ���α׷��� ���� ������ ( Entry Point )
//             �׻� �߰�ȣ�� ���۰� ������ ǥ�õȴ�.

void main_c(void)
{
	/* ��������1: arrEx2�� �ʱ�ȭ ����� char, float �ڷ������� �����ؼ� �׿� �°� ����
	���� �� �� �׿� �´� ���� �����ڸ� �̿��Ͽ� printf�� ��� �غ��� */

	// int n[4] = { 1, 2, 3, 4 };
	char charr[4] = { 'A', 'B', 'C', 'D' };
	float farr[4] = { 2.2f, 7.2f, 17.1f, 9.5f };

	printf("char�� �迭 ���: %c %c %c %c\n", charr[0], charr[1], charr[2], charr[3]);
	printf("float�� �迭 ���: %f %f %f %f\n", farr[0], farr[1], farr[2], farr[3]);

	/* ��������2: int, float�� �迭�� char���� '��'(ex 'a') ����
	����־����� int �� float �� ���������ڸ� �̿��Ͽ� printf�� ��� �غ��� */

	int narr[] = { 'a', 'A', 'n', 'N'};
	float farr2[] = { 'b', 'B', 'c', 'C'};

	printf("int�� ���: %d %d %d %d\n",narr[0], narr[1], narr[2], narr[3]);
	printf("float�� ���: %f %f %f %f\n", farr2[0], farr2[1], farr2[2], farr2[3]);

	/* ��������3 : char string[]�� ���� �� ���� ���� �� �� �迭���� ������ �Ѱ��� 
	����������(%c)�� �̿��Ͽ� printf�� ��� �غ��� */

	char name[] = {'A', 'n', 'G', 'y','u','\0'};
	printf("%c%c %c%c%c%c", name[0], name[1], name[2], name[3], name[4], name[5]);
}
