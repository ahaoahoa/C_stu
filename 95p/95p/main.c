/*95p 9/18*/

#include <stdio.h>
int main(void)
{
	int pro;
	long long int saving;

	printf("매달 저축 금액을 입력하시오:");
	scanf_s("%d", &saving);

	pro = saving * 12 * 30;
	printf("30년 후의 재산 = %lld원 \n", pro);
	return 0;
}