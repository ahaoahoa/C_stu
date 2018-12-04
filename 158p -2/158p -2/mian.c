#include <stdio.h>

int main(void)
{
	double x;
	double y;

	printf("정수를 입력하시오:");
	scanf_s("%lf", &x);

	y = (x*x*x - 20) / (x - 7);
	printf("수식의 값은 %lf", y);

	return 0;
}