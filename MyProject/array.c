#include <stdio.h>

int main_array(void) {
	// 배열
	//int subway_1 = 30; // 지하철 1호차에 30명이 타고 있다.
	//int subway_2 = 40;
	//int subway_3 = 50;

	//printf("지하철 1호차에 %d명이 타고 있습니다. \n", subway_1);
	//printf("지하철 2호차에 %d명이 타고 있습니다. \n", subway_2);
	//printf("지하철 3호차에 %d명이 타고 있습니다. \n", subway_3);

	// 여러개의 변수를 함께, 동시에 생성
	//int subway_array[3]; // [0] [1] [2]
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	/*for (int i = 0; i < 3; i++) {
		printf("지하철 %d호차에 %d명이 타고 있습니다. \n", i+1, subway_array[i]);
	}*/

	// 값 설정 방법
	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}*/

	// 값은 초기화를 반드시 해야함
	// 배열 크기는 항상 상수로 선언

	//int arr[10] = { 1, 2 }; // 3번째 값부터는 자동으로 '0'으로 초기화됨
	//for (int i = 0; i < 10; i++) {
	//	printf("%d\n", arr[i]);
	//}

	//int arr[] = { 1,2 }; // arr[2]

	//float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	//for (int i = 0; i < 5; i++) {
	//	printf("%.2f\n", arr_f[i]);
	//}

	// 문자 vs 문자열

	// 문자열 끝에는 끝을 의미하는 NULL문자 \0이 포함되어야함
	// coding은 여섯 글자지만 마지막에 \0이 들어갈수 있는 칸이 있어야하므로
	// 배열의 크기를 7로 해야 정상적으로 출력된다
	//char str[7] = "coding"; // [c] [o] [d] [i] [n] [g] [\n]
	//printf("%s\n", str);

	char str[] = "coding"; // [c] [o] [d] [i] [n] [g] [\n]
	/*printf("%s\n", str);
	printf("%d\n", sizeof(str));*/

	/*for (int i = 0; i < sizeof(str); i++) {
		printf("%c\n", str[i]);
	}*/

	/*char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));*/
	// 영어 1글자 : 1byte
	// 한글 1글자 : 2byte
	// char 크기 : 1byte

	char c_array[7] = { 'c', 'o', 'd','i','n', 'g', '\0' };
	printf("%s\n", c_array);
	return 0;
}