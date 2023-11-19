#include <stdio.h>


int main_condition(void){
	// 버스를 탄다고 가정, 학생 / 일반인으로 구분 (일반인 : 20세)
	/*int age = 25;*/
	// if(조건) {...} else {...}
	/*if (age >= 20)
		printf("일반인 입니다.\n");
	else
		printf("학생입니다.\n");*/

	// 초등학생/중학생/고등학생으로 나눌 때
	// if / else if / else

	/*int age = 25;
	if (age >= 8 && age <= 13) {
		printf("초등학생입니다. \n");
	}
	else if (age >= 14 && age <= 16) {
		printf("중학생입니다. \n");
	}
	else if(age >= 17 && age <=19){
		printf("고등학생입니다\n");
	}
	else {
		printf("학생이 아닌가봐요");
	}*/

	// break / continue
	// 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
	/*for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("나머지 학생은 집에 가세요. \n");
			break;
		}
		printf("%d번 학생은 조별 발표를 준비하세요. \n");
	}*/

	// 가위바위보
	//srand(time(NULL)); // 랜덤 난수 생성 / 난수 : 무작위로 만들어진 수
	//int i = rand() % 3; // 0~2반환
	//if (i == 0) {
	//	printf("가위\n");
	//}
	//else if (i == 1) {
	//	printf("바위\n");
	//}
	//else if (i == 2) {
	//	printf("보\n");
	//}
	//else {
	//	printf("몰라요\n");
	//}

	//srand(time(NULL));
	//int i = rand() % 3; // 0~2반환
	//switch (i) {
	//case 0:printf("가위\n"); break;
	//case 1:printf("바위\n"); break;
	//case 2:printf("보\n"); break;
	//default:printf("몰라요\n"); break;
	//} 


	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~100사이의 숫자
	printf("숫자 : %d\n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회
	while (1) {
		printf("남은 기회 %d번 \n", chance--);
		printf("숫자를 맞혀보세요 (1 ~ 100) : ");
		scanf_s("%d", &answer);
		if (answer > num) {
			printf("DOWN !! \n\n");
		}
		else if (answer < num) {
			printf("UP !! \n\n");
		}
		else if (answer == num) {
			printf("정답입니다 ! \n\n");
			break;
		}
		else { printf("알 수 없는 오류가 발생했어요. \n\n"); }

		if (chance == 0) {
			printf("모든 기회를 다 사용하셨어요. 아쉽게 실패하셨어요. ");
			break;
		}
	}
	

	
	return 0;
}