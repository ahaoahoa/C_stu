/*10/2 Ȳ���� 15���*/
#include<stdio.h>
int main(void)
{
	int b;

	for (b = 1; b < 101; b++)
		if (b % 15 == 0)
			printf("%d \n", b);

	return 0;
}