/*10/2 황성훈 데이터 입력!*/
#include<stdio.h>
int main(void)
{
	int i, j;
	while (1){
		printf("데이터를 입력하시오:");
		scanf_s("%d", &i);
		for (j = 0; j <= i; j++){
			printf("*");
		}
		printf("\n");
		
	}
	return 0;
}