#include <stdio.h>


int main_loop(void)
{
	// printf("Hello World\n");

	// int b = 20;
	// printf("b는 %d\n", ++b); // b = b+1을 수행하고 문장 수행
	// printf("b는 %d\n", b++); // 문장 수행 후 b = b+1
	// printf("b는 %d\n", b);
	// 출력 결과 21, 21, 22

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

	// 반복문
	// for, while, do while

	// for(선언; 조건; 증감)
	/*for (int i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}*/

	// while(조건) {}
	/*int i = 1;
	while (i <= 10) {
		printf("Hello World %d\n", i++);
	}*/

	// do{} while(조건);
	/*int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);*/

	// 2중 반복문
	/*for (int i = 1; i <= 3; i++) {
		printf("첫 번째 반복문 : %d\n", i);
		for (int j = 1; j <= 5; j++) {
			printf("    두 번째 반복문 : %d\n", j);
		}
	}*/

	// 구구단
	// 2x1=2
	// 2x2=4
	// ...

	/*for (int i = 2; i <= 9; i++) {
		printf("%d단 계산\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("   %d x %d = %d\n", i, j, i * j);
		}
	}*/


	// 피라미드를 쌓아라 프로젝트
	int floor;
	printf("몇 층으로 쌓겠느냐?");
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