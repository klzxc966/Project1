#include <stdio.h> 


void main_a(void)
{

	/* ���� 1: ���� �ٸ� ��������* (int 10���� �ƴ�!) �� ���� �̸��� 
	�밡���� ǥ����� ����Ͽ� 10���� �̻� ����� �����Ѵ�. */

	char cdata = 'A';
	int ndata = -120;
	short shdata = -30;
	long ldata = -1000;
	float fdata = 12.3f;
	double ddata = 15.66;
	long double lddata = 4050.4567;
	unsigned int undata = 20;
	unsigned short usdata = 1;
	unsigned long uldata = 100;

	/* ����2: ������ ������ VisualStudio�� ����� ���( F5 )�� ������ F10�� �����鼭 ���δ����� �������鼭 
	���콺�� ������ �����Ͽ� ���� ���� ���ʴ�� Ȯ���غ���. */

	/* ����3: ����1�� �������� ���ο� ������ �������Ѵ�.
	ex) int nA = 5;
	nA = 10; */

	cdata = 'b';
	ndata = -220;
	shdata = -560;
	ldata = -16600;
	fdata = -168.3f;
	ddata = 215.36;
	lddata = 4605.47;
	undata = 79;
	usdata = 55;
	uldata = 160;

	/* ����4: unsigned char ������ ������ 4�� �����ؼ� ���� G,A,M,E�̶�� *��*�� �����ϰ�
            10������ �ƽ�Ű �ڵ尡 ������ �˾ƺ��� */

	unsigned char uca = 'G';
	unsigned char ucb = 'A';
	unsigned char ucc = 'M';
	unsigned char ucd = 'E';

	int a = uca; int b = ucb; int c = ucc; int d = ucd;

	printf("G�� �ƽ�Ű ��: %d\nA�� �ƽ�Ű ��: %d\nM�� �ƽ�Ű ��: %d\nE�� �ƽ�Ű ��: %d",a,b,c,d);

}
