/* 157p -3 9/18*/
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	int r;
	printf("������ 3�� �Է��Ͻÿ�:");
	scanf_s("%d %d %d", &x, &y, &z);
	
	r = x * y - z;
	printf(" %d * %d - %d = %d", x, y, z, r);
	return 0;
}