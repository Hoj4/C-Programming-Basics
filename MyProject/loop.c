#include <stdio.h>


int main(void)
{
	// printf("Hello World\n");

	// int b = 20;
	// printf("b�� %d\n", ++b); // b = b+1�� �����ϰ� ���� ����
	// printf("b�� %d\n", b++); // ���� ���� �� b = b+1
	// printf("b�� %d\n", b);
	// ��� ��� 21, 21, 22

	/*int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);*/

	// �ݺ���
	// for, while, do while

	// for(����; ����; ����)
	/*for (int i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}*/

	// while(����) {}
	/*int i = 1;
	while (i <= 10) {
		printf("Hello World %d\n", i++);
	}*/

	// do{} while(����);
	/*int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);*/

	// 2�� �ݺ���
	/*for (int i = 1; i <= 3; i++) {
		printf("ù ��° �ݺ��� : %d\n", i);
		for (int j = 1; j <= 5; j++) {
			printf("    �� ��° �ݺ��� : %d\n", j);
		}
	}*/

	// ������
	// 2x1=2
	// 2x2=4
	// ...

	/*for (int i = 2; i <= 9; i++) {
		printf("%d�� ���\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("   %d x %d = %d\n", i, j, i * j);
		}
	}*/


	// �Ƕ�̵带 �׾ƶ� ������Ʈ
	int floor;
	printf("�� ������ �װڴ���?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}