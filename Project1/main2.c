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

	printf("���ڰ��� �Է��ϼ���\n");
	scanf("%c", &cdata);

	printf("�������� �Է��ϼ���\n");
	scanf("%d", &ndata);

	printf("�������� �Է��ϼ���\n");
	scanf("%d", &ldata);

	printf("�Ǽ����� �Է��ϼ���\n");
	scanf("%f", &fdata);

	printf("�Ǽ����� �Է��ϼ���\n");
	scanf("%f", &ddata);

	printf("�Ǽ����� �Է��ϼ���\n");
	scanf("%f", &lddata);

	printf("���� �������� �Է��ϼ���\n");
	scanf("%d", &undata);

	printf("���� �������� �Է��ϼ���\n");
	scanf("%d", &uldata);


	/* ��������2: ���� 1���� �Է� ���� ��� ���� �ڷ��� ������� 10������ 16������ ����Ѵ�.
	���Ĺ���� ������, ������ 2���� �����Ӱ� ����غ���.*/

	printf("char, 10����: %05d, 16����: %-5x\n", cdata, cdata);
	printf("int, 10����: %05d, 16����: %-5x\n", ndata, ndata);
	printf("long, 10����: %05d, 16����: %-5x\n", ldata, ldata);
	printf("float, 10����: %05d, 16����: %-5x\n", fdata, fdata);
	printf("double, 10����: %05d, 16����: %-5x\n", ddata, ddata);
	printf("long double, 10����: %05d, 16����: %-5x\n", lddata, lddata);
	printf("unsigned int, 10����: %05d, 16����: %-5x\n", undata, undata);
	printf("unsigned long, 10����: %05d, 16����: %-5x\n", uldata, uldata);
	// ��¿�
}