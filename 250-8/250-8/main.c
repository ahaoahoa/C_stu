/*10/2 Ȳ���� ���۰� ���� ��*/
#include<stdio.h>
int main(void)
{
	int x, y, sum;
	sum = 0;
	printf("��������:");
	scanf_s("%d", &x);

	printf("��������:");
	scanf_s("%d", &y);

	while (x <= y){
		sum += x;
		x++;
	}
	printf("Sum of %d to %d = %d", x, y, sum);
	return 0;
}