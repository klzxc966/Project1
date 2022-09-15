#include <stdio.h> 


void main_a(void)
{

	/* 과제 1: 서로 다른 데이터형* (int 10개가 아님!) 의 변수 이름을 
	헝가리안 표기법을 사용하여 10가지 이상 선언과 정의한다. */

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

	/* 과제2: 각각의 변수를 VisualStudio의 디버깅 모드( F5 )로 실행후 F10을 누르면서 라인단위로 내려가면서 
	마우스를 변수에 오버하여 변수 값을 차례대로 확인해본다. */

	/* 과제3: 과제1의 변수들을 새로운 값으로 재정의한다.
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

	/* 과제4: unsigned char 형으로 변수를 4개 선언해서 각각 G,A,M,E이라는 *값*을 갖게하고
            10진수로 아스키 코드가 얼마인지 알아본다 */

	unsigned char uca = 'G';
	unsigned char ucb = 'A';
	unsigned char ucc = 'M';
	unsigned char ucd = 'E';

	int a = uca; int b = ucb; int c = ucc; int d = ucd;

	printf("G의 아스키 값: %d\nA의 아스키 값: %d\nM의 아스키 값: %d\nE의 아스키 값: %d",a,b,c,d);

}
