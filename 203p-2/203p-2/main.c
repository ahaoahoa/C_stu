#include<stdio.h>
int main(void)
{
	int a, b, h, c;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &a);

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &b);

	h = a + b;
	printf("�μ��� ���� %d �Դϴ�.", h);
	if (a > b)
		c = a - b;
	else
		c = b - a;
	printf("�μ��� ���� %d �Դϴ�.", c);

	return 0;
}