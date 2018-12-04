/*10/2 È²¼ºÈÆ ¼·¾¾ È­¾¾*/
#include<stdio.h>
int main(void)
{
	int i, j;

	printf("===================\n");
	printf("È­¾¾¿Âµµ    ¼·¾¾¿Âµµ\n");
	
	for (i = 0; i <= 100; i += 10){
		j = (i - 32) / 1.8;
		printf("%d             %d\n", i, j);
	}
	printf("===================\n");
	return 0;
}