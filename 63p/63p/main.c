/*63p 9/18*/

#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int sum;

	printf("첫번째 숫자를 입력하시오:");
	scanf_s("%d", &x);

	printf("두번째 숫자를 입력하시오:");
	scanf_s("%d", &y);

	sum = x + y;
	printf("두수의 합 = %d\n", sum);

	return 0;
}