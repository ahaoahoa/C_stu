/*157p 9/18*/
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int m;
	int n;

	printf("ù ��° ������ �Է��Ͻÿ�:");
	scanf_s("%d", &x);

	printf("�� ��° ������ �Է��Ͻÿ�:");
	scanf_s("%d", &y);

	m = x / y;
	n = x % y;
	printf("���� %d�̰� �������� %d�Դϴ�.", m, n);

	return 0;

}