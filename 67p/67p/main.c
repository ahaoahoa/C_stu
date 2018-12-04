/*67p 9/18*/
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	int a;
	int b;

	scanf_s("%d", &x);
	printf("여행은 몇박인가요?: %d\n", x);

	scanf_s("%d", &y);
	printf("항공권 가격: %d\n", y);

	scanf_s("%d", &z);
	printf("호텔 1박 가격: %d\n", z);

	scanf_s("%d", &a);
	printf("하루에 필요한 용돈: %d\n", a);

	b = y + (z + a)*x;
	printf("===========================%d");
	printf("총 여행 비용:%d", b);
	printf("===========================%d");

	return 0;
}