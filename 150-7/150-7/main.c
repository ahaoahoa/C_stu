/*10/2 È²¼ºÈÆ 15¹è¼ö*/
#include<stdio.h>
int main(void)
{
	int b;

	for (b = 1; b < 101; b++)
		if (b % 15 == 0)
			printf("%d \n", b);

	return 0;
}