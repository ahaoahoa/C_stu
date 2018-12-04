/*10/2 황성훈 3의배수!*/
#include<stdio.h>
int main(void)
{
	int b;

	for (b = 1; b < 101; b++){
		if (b % 3 == 0)
			printf("%d\n", b);
	}
	return 0;
}