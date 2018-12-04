/* 131p 9/18*/
#include <stdio.h>
int main(void)
{
	int x;
	int y;
	int z;

	printf("투입한돈:");
	scanf_s("%d", &x);

	printf("물건값:");
	scanf_s("%d", &y);

	printf("거스름돈:");
	scanf_s("%d", &z);

	int coin100s = z / 100;
	z = z % 100;

	printf("100원 동전의 개수: %d", coin100s);

	int coin10s = z / 10;
	printf("10원 동전의 개수 : %d", coin10s);

	return 0;



}