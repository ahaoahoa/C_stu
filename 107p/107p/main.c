/* 107p 9/18*/
#include <stdio.h>
#define PI 3.141592
int main(void)
{
	double rad;
	double area;

	printf("���� �������� �Է��Ͻÿ�:");
	scanf_s("%lf", &rad);

	area = PI * rad * rad;
	printf("���� ����: %f\n", area);

	return 0;
}