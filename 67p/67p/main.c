/*67p 9/18*/
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	int a;
	int b;

	scanf_s("%d", &x);
	printf("������ ����ΰ���?: %d\n", x);

	scanf_s("%d", &y);
	printf("�װ��� ����: %d\n", y);

	scanf_s("%d", &z);
	printf("ȣ�� 1�� ����: %d\n", z);

	scanf_s("%d", &a);
	printf("�Ϸ翡 �ʿ��� �뵷: %d\n", a);

	b = y + (z + a)*x;
	printf("===========================%d");
	printf("�� ���� ���:%d", b);
	printf("===========================%d");

	return 0;
}