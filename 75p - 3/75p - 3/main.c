#include <stdio.h>
int main(void)
{
	int x;
	int y;
	int z;
	int avg;

	printf(" ������ �Է��Ͻÿ�:");
	scanf_s("%d", &x);

	printf(" ������ �Է��Ͻÿ�:");
	scanf_s("%d", &y);
	printf(" ������ �Է��Ͻÿ�:");
	scanf_s("%d", &z);

	avg = (x + y + z) / 3;

	printf("����� %d�Դϴ�.\n", avg);

	return 0;
}