/*157p 9/18*/
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int m;
	int n;

	printf("첫 번째 정수를 입력하시오:");
	scanf_s("%d", &x);

	printf("두 번째 정수를 입력하시오:");
	scanf_s("%d", &y);

	m = x / y;
	n = x % y;
	printf("몫은 %d이고 나머지는 %d입니다.", m, n);

	return 0;

}