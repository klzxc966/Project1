#include <stdio.h> 
#pragma warning(disable:4996)

/*
1. ������
- �޴��� ���
1. ������ ��� ��� ( ���η� 3�ܾ� , ��: 2�� 3�� 4�� )
printf("%d x %d = %d",  ����1, ����2, ����3); <- �̷������� printf�� �ѹ��� ����ؼ� ����ؾ��Ѵ�.
2. ���ϴ� �������� �Է��ؼ� ��� ( ��: 7�� )
3. ����� �ٽ� �޴���� ( �������� )
ex) ���ϴ� �޴��� �Է��ϼ���
1. ������ ��� ��� 2. ���ϴ� ��������� 3. ���� :
*/

void main() {
	
	int select = 0;

	while (1) {
		printf("���ϴ� ��ư�� �������� \n 1.��ü ��� 2.������ ���� 3. ����");
		scanf("%d", &select);
		
		if (select == 1) {

				for (int i = 2; i <= 9; i+=3) {

						printf("%d��\t        %d��\t        %d��\t\n", i, i + 1, i + 2);

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
			printf("%����� �ܼ��� �Է��ϼ���\n");
			scanf("%d", &select2);

			for (int i = select2; i == select2; i++) {
				printf("%d��\n", select2);

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