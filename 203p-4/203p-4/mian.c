#include<stdio.h>
int main(void)
{
	int a, b, c;

	printf("�ﰢ���� ������ �Է��Ͻÿ�:");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a == b && b == c)
		printf("���ﰢ��");
	else if (a == b || b == c || a == c)
		printf("�̵ �ﰢ��");
	else
		printf("�Ϲ� �ﰢ��");

	return 0;
}