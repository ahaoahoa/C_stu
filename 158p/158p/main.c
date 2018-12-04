/*158p 9/18*/
#include <stdio.h>

int main(void)
{
	int a = 0, b;

	printf("정수를 입력하시오:");
	scanf_s("%d", a);

	b = a / 100;
	printf("%d", b);
	
	return 0;

}