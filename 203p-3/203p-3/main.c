/**/
#include<stdio.h>
int main(void)
{
	int a, b;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &a);

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &b);
	printf("�μ��� ���� %d�Դϴ�.", a + b);

	if (a >= b)
		printf("�μ��� ���� %d�Դϴ�.", a - b);
	else
		printf("�μ��� ���� %d�Դϴ�.", b - a);
	return 0;
	
}