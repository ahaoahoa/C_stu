/* 71p 9/18*/

#include <stdio.h>
int main(void)
{
	int x;
	int y;
	int result;
	printf("ù��° ���ڸ� �Է��Ͻÿ�:");
	scanf_s("%d", &x);

	printf("�ι�° ���ڸ� �Է��Ͻÿ�:");
	scanf_s("%d", &y);

	result = x + y;
	printf("�μ��� ��: %d\n", result);

	result = x - y;
	printf("�μ��� ��: %d\n", result);

	result = x*y;
	printf("�μ��� ��: %d\n", result);

	result = x / y;
	printf("�μ��� ��: %d\n", result);

	return 0;
}