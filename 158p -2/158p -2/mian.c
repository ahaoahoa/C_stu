#include <stdio.h>

int main(void)
{
	double x;
	double y;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%lf", &x);

	y = (x*x*x - 20) / (x - 7);
	printf("������ ���� %lf", y);

	return 0;
}