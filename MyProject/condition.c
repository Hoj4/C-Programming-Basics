#include <stdio.h>


int main_condition(void){
	// ������ ź�ٰ� ����, �л� / �Ϲ������� ���� (�Ϲ��� : 20��)
	/*int age = 25;*/
	// if(����) {...} else {...}
	/*if (age >= 20)
		printf("�Ϲ��� �Դϴ�.\n");
	else
		printf("�л��Դϴ�.\n");*/

	// �ʵ��л�/���л�/����л����� ���� ��
	// if / else if / else

	/*int age = 25;
	if (age >= 8 && age <= 13) {
		printf("�ʵ��л��Դϴ�. \n");
	}
	else if (age >= 14 && age <= 16) {
		printf("���л��Դϴ�. \n");
	}
	else if(age >= 17 && age <=19){
		printf("����л��Դϴ�\n");
	}
	else {
		printf("�л��� �ƴѰ�����");
	}*/

	// break / continue
	// 1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ�� �մϴ�.
	/*for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("������ �л��� ���� ������. \n");
			break;
		}
		printf("%d�� �л��� ���� ��ǥ�� �غ��ϼ���. \n");
	}*/

	// ����������
	//srand(time(NULL)); // ���� ���� ���� / ���� : �������� ������� ��
	//int i = rand() % 3; // 0~2��ȯ
	//if (i == 0) {
	//	printf("����\n");
	//}
	//else if (i == 1) {
	//	printf("����\n");
	//}
	//else if (i == 2) {
	//	printf("��\n");
	//}
	//else {
	//	printf("�����\n");
	//}

	//srand(time(NULL));
	//int i = rand() % 3; // 0~2��ȯ
	//switch (i) {
	//case 0:printf("����\n"); break;
	//case 1:printf("����\n"); break;
	//case 2:printf("��\n"); break;
	//default:printf("�����\n"); break;
	//} 


	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~100������ ����
	printf("���� : %d\n", num);
	int answer = 0; // ����
	int chance = 5; // ��ȸ
	while (1) {
		printf("���� ��ȸ %d�� \n", chance--);
		printf("���ڸ� ���������� (1 ~ 100) : ");
		scanf_s("%d", &answer);
		if (answer > num) {
			printf("DOWN !! \n\n");
		}
		else if (answer < num) {
			printf("UP !! \n\n");
		}
		else if (answer == num) {
			printf("�����Դϴ� ! \n\n");
			break;
		}
		else { printf("�� �� ���� ������ �߻��߾��. \n\n"); }

		if (chance == 0) {
			printf("��� ��ȸ�� �� ����ϼ̾��. �ƽ��� �����ϼ̾��. ");
			break;
		}
	}
	

	
	return 0;
}