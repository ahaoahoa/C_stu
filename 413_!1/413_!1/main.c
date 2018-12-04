#include<stdio.h>
int main()
{
	int ch;
	printf("문자를 입력해주세요:");
	ch = getchar();
	printf("문자 %c의 아스키 코드는 %d입니다.", ch, ch);
	return 0;
}