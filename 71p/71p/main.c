/* 71p 9/18*/

#include <stdio.h>
int main(void)
{
	int x;
	int y;
	int result;
	printf("첫번째 숫자를 입력하시오:");
	scanf_s("%d", &x);

	printf("두번째 숫자를 입력하시오:");
	scanf_s("%d", &y);

	result = x + y;
	printf("두수의 합: %d\n", result);

	result = x - y;
	printf("두수의 차: %d\n", result);

	result = x*y;
	printf("두수의 곱: %d\n", result);

	result = x / y;
	printf("두수의 몫: %d\n", result);

	return 0;
}