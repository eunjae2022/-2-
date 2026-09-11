#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
수식 입력 (예: 3-7>> )
*/

int main(void) {
	//변수 선언

	//값 입력 받기

	//처리 연산

	//결과출력하기
	int num1=0, num2=0, result =0;
	char op;


	printf("수식 입력 (예: 3-7>> ) ");
	scanf("%d %c %d", &num1, &op, &num2);

	switch (op) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		if (num2 != 0) {
			result = num1 / num2;
		}
		else
		{
			printf("올바른 형식을 입력하세요");
			return 0;
		}
		break;
	default:
		printf("잘못입력하셨습니다.\n");
	}

	printf("결과는 %d\n", result);

	

	return 0;
}