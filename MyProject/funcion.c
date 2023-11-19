#include <stdio.h>

void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int add(int num, int num2);
int sub(int num, int num2);
int mul(int num, int num2);
int div(int num, int num2);

int main_function(void) {
	// function
	// 계산기

	// int num = 2;
	// p(num);

	// 2+3은?
	// num = num + 3;
	// p(num);

	// 함수종류
	// 반환값이 없는 함수
	// function_without_return();
	// function_with_return();
	
	// 반환값이 있는 함수
	// int ret = function_with_return();
	// p(ret);

	// 파라미터(전달값)가 없는 함수
	// function_without_params();

	// 파라미터(전달값)가 있는 함수
	// function_with_params(1,2,3);

	// 계산기 함수
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);


	return 0;
}

//정의
void p(int num)
{
	printf("num은 %d입니다 \n", num);
}

// 반환형 함수이름(전달값){  
// }

void function_without_return() {
	printf("반환값이 없는 함수입니다.\n");
}

int function_with_return() {
	printf("반환값이 있는 함수입니다.\n");
	return 10;
}

void function_without_params(){
	printf("전달값이 없는 함수입니다.\n");
}

void function_with_params(int num1, int num2, int num3) {
	printf("전달값이 있는 함수이며, 전달받은 값은 %d, %d, %d 입니다 \n", num1, num2, num3);
}

int add(int num, int num2) {
	return num + num2;
}

int sub(int num, int num2) {
	return num - num2;
}

int mul(int num, int num2) {
	return num * num2;
}

int div(int num, int num2) {
	return num / num2;
}