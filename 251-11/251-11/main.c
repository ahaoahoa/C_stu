/*10/2 황성훈 숫자 와우*/
#include<stdio.h>
int main(void)
{
	int i, j, h;
	printf("정수를 입력하시오:");
	scanf_s("%d", &i);

	for (j = 0; j <= i; j++){
		for (h = 1; h <= j; h++){
			printf("%d", h);
		}
		printf("\n");
	}
	return 0;
}