#include<stdio.h>
int main(void)
{
	int a, b, c;

	printf("삼각형의 세변을 입력하시오:");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a == b && b == c)
		printf("정삼각형");
	else if (a == b || b == c || a == c)
		printf("이등변 삼각형");
	else
		printf("일반 삼각형");

	return 0;
}