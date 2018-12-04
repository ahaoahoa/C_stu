/*11월 6일 황성훈*/
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
	printf("5개의 정수를 입력하시오:");
	scanf_s("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	swap(&a);
	printf("역순 :%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
}