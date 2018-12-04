/* 157p -3 9/18*/
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	int r;
	printf("정수를 3개 입력하시오:");
	scanf_s("%d %d %d", &x, &y, &z);
	
	r = x * y - z;
	printf(" %d * %d - %d = %d", x, y, z, r);
	return 0;
}