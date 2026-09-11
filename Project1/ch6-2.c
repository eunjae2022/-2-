#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
문2 if else if else문 (소인: 14세 미만)

1번)자유이용권 오전만: 10000
2번)자유이용권 종일권: 대인34000, 소인 25000
3번)자유이용권 야간권: 대인12000, 소인 10000

메뉴 선택 >>> 3
나이 입력 >>> 12
소인 야간 이용권 10000원 입니다.

*/
#define USE 10000

int main(void)
{
	//변수 선언
	int menu = 0, age = 0, pay=0;
	//값 입력받기
	printf("-----------------------------\n");
	printf("[1] 오전권 : 10000원\n");
	printf("[2] 종일권: 대인12000, 소인10000\n");
	printf("[3] 자유이용권 야간권: 대인12000, 소인 10000\n");
	printf("-----------------------------\n");
	printf("메뉴 선택>> ");
	scanf("%d", &menu);
	//연산 처리
	if (menu < 1 || menu>3)
	{
		printf("잘못 입력하셨습니다. ");
		return 0;
	}
	printf("나이를 입력하시오");
	scanf("%d", &age);

	if (menu == 1)
	{
		printf("입장료는 %d원 \n", USE);
	}
	else if (menu == 2) { //65세 이상이면 10% 할인
		if (age < 14)
		{
			printf("입장료는 %d원\n", 25000);
		}
		else if(age >= 14 && age<65)
			printf("입장료는 %d원 \n", 34000);
		else if (age >= 65)
		{
			printf("입장료는 %d원", (int)(34000 * 0.9));
		}

	}
	else if (menu == 3) {
		if (age < 14)
		{
			printf("입장료는 %d원\n", USE);
		}
		else
		{
			printf("입장료는 %d원\n", 12000);
		}
	}
	else {
		printf("잘못 입력했습니다.\n");
		return 0;
	}

	//결과 출력

	return 0;
}