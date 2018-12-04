/*10/2 황성훈 연료탱크*/
#include<stdio.H>
int main(void)
{
	int a, b, c;
	c = 1000;
	printf("초기연료량 : %d\n", c);
	while (c >= 100){
		printf("연료 충전은 +, 소모는 -로 입력해주세요:");
		scanf_s("%d", &b);
		c = b + c;
	}
	printf("(경고) 연료가 10이하입니다.\n");
	return 0;

}