/**/
#include<stdio.h>
int main(void)
{
	int a, b;
	printf("정수를 입력하시오:");
	scanf_s("%d", &a);

	printf("정수를 입력하시오:");
	scanf_s("%d", &b);
	printf("두수의 합은 %d입니다.", a + b);

	if (a >= b)
		printf("두수의 차는 %d입니다.", a - b);
	else
		printf("두수의 차는 %d입니다.", b - a);
	return 0;
	
}