/*10/2 Ȳ���� ���� �Ϳ�*/
#include<stdio.h>
int main(void)
{
	int i, j, h;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &i);

	for (j = 0; j <= i; j++){
		for (h = 1; h <= j; h++){
			printf("%d", h);
		}
		printf("\n");
	}
	return 0;
}