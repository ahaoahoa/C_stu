/*10/2 황성훈 1에서 10까지 정수의 합 구하기*/
#include<stdio.h>
int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i <= 10; i++)
		sum += i;

	printf("1부터 10까지의 정수의 합 = %d \n", sum);
	return 0;
}