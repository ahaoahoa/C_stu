/*11월 6일 황성훈*/
#include<stdio.h>
int get_array_sum(int *a, int size)
{
	int sum = 0;
	for (int i = 0; i < 10; i++){
		sum += a[i];
	}
	return sum;
}
int main()
{
	int data[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("%d", get_array_sum(&data, 10));
	return 0;
}