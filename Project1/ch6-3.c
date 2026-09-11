#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>		//time 제공
#include <stdlib.h>   // srand, rand
/* 문3> 정답 (난수 설정) 맞추기
*  1~50사이의 숫자를 맞추세요
* 힌트> 박수 짝!  입력>>23
* 땡!! 정답은 31

*/

int main(void)
{
	srand((unsigned)time(0));

	//변수선언
	int answer = rand() % 50 + 1;
	int user=0, d10=0, d1=0;


	d10 = answer / 10; //몫 >>10의자리수
	d1 = answer % 10; //나머지>> 1의자리수

	//값 입력 받기
	printf("1~50사이의 정수를 입력하세요\n");
	//정답이 한자리수 >> 10의 자리 = 5 저장
	if (d10 == 0)
	{
		d10 = 5;
	}
	if (d1 == 0)
		d1 = 5;


	//연산 처리
	if (d10 % 3 == 0 && d1 % 3 == 0)
	{
		printf("힌트: 박수 짝! 짝!\n");
	}
	else if ((d10 % 3 == 0 && d1 % 3 != 0) || (d10 % 3 != 0 && d1 % 3 == 0))
	{
		printf("힌트: 박수 짝!\n");
	}
	else
		printf("힌트: 박수 없음~\n");

	printf("정답 입력>> ");
	scanf("%d", &user);

	if (answer == user)
	{
		printf("정답!\n");

	}
	else
	{
		printf("땡!\n 정답은 %d 입니다.", answer);
	}
	

	//결과 출력
	return 0;
}