/*10/2 È²¼ºÈÆ continue*/
#include<stdio.h>
int main(void)
{
	int i;
	for (i = 0; i < 10; i++){
		if (i % 2 == 1)
			continue;
		printf("Á¤¼ö : %d \n", i);
	}
	return 0;
}