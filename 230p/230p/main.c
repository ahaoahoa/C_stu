/*10/2 Ȳ���� 1���� 10���� ������ �� ���ϱ�*/
#include<stdio.h>
int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i <= 10; i++)
		sum += i;

	printf("1���� 10������ ������ �� = %d \n", sum);
	return 0;
}