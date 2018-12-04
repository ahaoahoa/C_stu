/*10/2 황성훈 약수구하기*/
#include<stdio.h>
int main(void)
{
	int i, j;
	printf("정수를 입력하시오:");
	scanf_s("%d", &i);

	for (j = 1; j <= i; j++){
		if (i%j == 0)
			printf("%d\n", j);
	}
	return 0;
}