#include<stdio.h>
int main(void)
{
	int a;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &a);

	if (a % 2 == 0)
		printf("%d �� ¦���Դϴ�.",a);
	else
		printf("%d �� Ȧ���Դϴ�.",a);

	return 0;
}