/*130p 9/18*/
#include <stdio.h>
int main(void)
{
	int money;
	int candy_price;

	printf("현재 가지고 있는 돈:");
	scanf_s("%d", &money);

	printf("캔디의 가격:");
	scanf_s("%d", &candy_price);

	int n_candies = money / candy_price;
	printf("최대로 살 수 있는 캔디의 개수 = %d \n", n_candies);

	int change = money % candy_price;
	printf("캔디 구입 후 남은 돈 = %d \n", change);

	return 0;
}