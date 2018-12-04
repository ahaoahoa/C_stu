/* 107p 9/18*/
#include <stdio.h>
#define PI 3.141592
int main(void)
{
	double rad;
	double area;

	printf("원의 반지름을 입력하시오:");
	scanf_s("%lf", &rad);

	area = PI * rad * rad;
	printf("원의 면적: %f\n", area);

	return 0;
}