/*11�� 6�� Ȳ����*/
#include<stdio.h>
void swap(int *a)
{
	int b, c;
	b = a[4];
	a[4] = a[0];
	a[0] = b;
	c = a[3];
	a[3] = a[1];
	a[1] = c;
}
int main()
{
	int a[5] = {0,0,0,0,0};
	printf("5���� ������ �Է��Ͻÿ�:");
	scanf_s("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	swap(&a);
	printf("���� :%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
}