#include <stdio.h> 
#pragma warning(disable:4996)

/*
1. 구구단
- 메뉴가 출력
1. 구구단 모두 출력 ( 가로로 3단씩 , 예: 2단 3단 4단 )
printf("%d x %d = %d",  변수1, 변수2, 변수3); <- 이런식으로 printf를 한번만 사용해서 출력해야한다.
2. 원하는 구구단을 입력해서 출력 ( 예: 7단 )
3. 출력후 다시 메뉴출력 ( 루프구현 )
ex) 원하는 메뉴를 입력하세요
1. 구구단 모두 출력 2. 원하는 구구단출력 3. 종료 :
*/

void main() {
	
	int select = 0;

	while (1) {
		printf("원하는 버튼을 누르세요 \n 1.전체 출력 2.구구단 선택 3. 종료");
		scanf("%d", &select);
		
		if (select == 1) {

				for (int i = 2; i <= 9; i+=3) {

						printf("%d단\t        %d단\t        %d단\t\n", i, i + 1, i + 2);

					for (int j = 1; j <= 9; j++)
					{
							for (int b=0; b <= 2; b++) {
								printf("%d x %d = %d", i+b, j, (i+b) * j);
								printf("\t");
							}
							printf("\n");
					}

				}
			
		}
		
		if (select == 2) {
			int select2;
			printf("%출력할 단수를 입력하세요\n");
			scanf("%d", &select2);

			for (int i = select2; i == select2; i++) {
				printf("%d단\n", select2);

				for (int j = 1; j <= 9; j++)
				{
					printf("%d x %d = %d\n", i, j, i * j);
				}

			}
		}

		if (select == 3) {
			break;
		}
	}

}