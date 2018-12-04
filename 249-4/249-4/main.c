/*10/2 황성훈 정수더하기*/
#include<stdio.h>
int main(void)
{
	int i, sum;
	i = 1;
	sum = 0;
	while (i){
		printf("정수를 입력하시오: ");
		scanf_s("%d", &i);
		sum += i;
		if (i == 0){
			break;
		}
	}
	printf("합계: %d", sum);
	return 0;

}