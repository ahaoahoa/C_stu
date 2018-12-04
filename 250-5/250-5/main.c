/*10/2 황성훈 숫자 나타나라ㅃ!*/
#include<stdio.h>
int main(void)
{
	int i, j;
	for (i = 1; i < 8; i++)
	{
		for (j = 1; j < 8; j++)
		{
			if (j <= i)
			    printf("%d", j);
			else
				printf("*");
		}
		printf("\n");
	}
	return 0;
}