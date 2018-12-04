/*10/2 황성훈 안녕하세여*/
#include<stdio.h>
int main(void)
{
	int t;

	printf("몇 번이나 반복할까요:");
	scanf_s("%d", &t);

	while (t > 0){
		printf("안녕하세요\n");
		t--;
	}
	return 0;
}