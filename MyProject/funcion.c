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
	// ����

	// int num = 2;
	// p(num);

	// 2+3��?
	// num = num + 3;
	// p(num);

	// �Լ�����
	// ��ȯ���� ���� �Լ�
	// function_without_return();
	// function_with_return();
	
	// ��ȯ���� �ִ� �Լ�
	// int ret = function_with_return();
	// p(ret);

	// �Ķ����(���ް�)�� ���� �Լ�
	// function_without_params();

	// �Ķ����(���ް�)�� �ִ� �Լ�
	// function_with_params(1,2,3);

	// ���� �Լ�
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

//����
void p(int num)
{
	printf("num�� %d�Դϴ� \n", num);
}

// ��ȯ�� �Լ��̸�(���ް�){  
// }

void function_without_return() {
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}

int function_with_return() {
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}

void function_without_params(){
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}

void function_with_params(int num1, int num2, int num3) {
	printf("���ް��� �ִ� �Լ��̸�, ���޹��� ���� %d, %d, %d �Դϴ� \n", num1, num2, num3);
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