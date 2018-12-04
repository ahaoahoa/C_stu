#include<stdio.h>
int main()
{
	char c[20];
	printf("파일 이름을 입력하시오:");
	scanf("%s", c);
	FILE *fp = fopen(c, "r");
	if (fp == NULL)
		printf("오류");


	fclose(fp);
	return 0;
}