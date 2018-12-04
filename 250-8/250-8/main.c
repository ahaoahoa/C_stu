/*10/2 황성훈 시작과 끝의 합*/
#include<stdio.h>
int main(void)
{
	int x, y, sum;
	sum = 0;
	printf("시작정수:");
	scanf_s("%d", &x);

	printf("종료정수:");
	scanf_s("%d", &y);

	while (x <= y){
		sum += x;
		x++;
	}
	printf("Sum of %d to %d = %d", x, y, sum);
	return 0;
}