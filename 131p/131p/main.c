/* 131p 9/18*/
#include <stdio.h>
int main(void)
{
	int x;
	int y;
	int z;

	printf("�����ѵ�:");
	scanf_s("%d", &x);

	printf("���ǰ�:");
	scanf_s("%d", &y);

	printf("�Ž�����:");
	scanf_s("%d", &z);

	int coin100s = z / 100;
	z = z % 100;

	printf("100�� ������ ����: %d", coin100s);

	int coin10s = z / 10;
	printf("10�� ������ ���� : %d", coin10s);

	return 0;



}