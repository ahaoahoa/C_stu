/*10/2 Ȳ���� continue*/
#include<stdio.h>
int main(void)
{
	int i;
	for (i = 0; i < 10; i++){
		if (i % 2 == 1)
			continue;
		printf("���� : %d \n", i);
	}
	return 0;
}