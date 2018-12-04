#include<stdio.h>
int main(void)
{
	int a, b, h, c;
	printf("정수를 입력하시오:");
	scanf_s("%d", &a);

	printf("정수를 입력하시오:");
	scanf_s("%d", &b);

	h = a + b;
	printf("두수의 합은 %d 입니다.", h);
	if (a > b)
		c = a - b;
	else
		c = b - a;
	printf("두수의 차는 %d 입니다.", c);

	return 0;
}