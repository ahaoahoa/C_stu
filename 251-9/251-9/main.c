/*10/2 Ȳ���� ������ϱ�*/
#include<stdio.h>
int main(void)
{
	int i, j;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &i);

	for (j = 1; j <= i; j++){
		if (i%j == 0)
			printf("%d\n", j);
	}
	return 0;
}