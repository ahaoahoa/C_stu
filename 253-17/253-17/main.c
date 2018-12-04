/*10/2 황성훈 소수일까?*/
#include<stdio.h>
int main(void)
{
	int a, i, b;
	printf("정수를 입력하시오:");
	scanf_s("%d", &a);
	i = 2;

	while (i == 1000 || ){
		if (a%i == 0)
			printf("%d 는 소수가 아닙니다.\n");
		else
			i++;
	}
	
	return 0;
}