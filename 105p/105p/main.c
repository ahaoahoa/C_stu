/* 105p 9/18*/
#include <stdio.h>
int main(void)
{
	double cel, fah;

	printf("ȭ���µ�=");
	scanf_s("%lf", &fah);

	cel = (fah - 32.0) * 5.0 / 9.0;
	printf("�����µ� = %lf", cel);
}