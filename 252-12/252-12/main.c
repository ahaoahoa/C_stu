/*10/2 Ȳ���� ������ �Է�!*/
#include<stdio.h>
int main(void)
{
	int i, j;
	while (1){
		printf("�����͸� �Է��Ͻÿ�:");
		scanf_s("%d", &i);
		for (j = 0; j <= i; j++){
			printf("*");
		}
		printf("\n");
		
	}
	return 0;
}