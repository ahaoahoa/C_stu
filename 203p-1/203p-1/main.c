#include<stdio.h>
int main(void)
{
	int a;
	printf("정수를 입력하시오:");
	scanf_s("%d", &a);

	if (a % 2 == 0)
		printf("%d 은 짝수입니다.",a);
	else
		printf("%d 은 홀수입니다.",a);

	return 0;
}