/*10/2 Ȳ���� ���� ȭ��*/
#include<stdio.h>
int main(void)
{
	int i, j;

	printf("===================\n");
	printf("ȭ���µ�    �����µ�\n");
	
	for (i = 0; i <= 100; i += 10){
		j = (i - 32) / 1.8;
		printf("%d             %d\n", i, j);
	}
	printf("===================\n");
	return 0;
}