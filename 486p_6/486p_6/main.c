#include<stdio.h>
int main()
{
	char c[20];
	printf("���� �̸��� �Է��Ͻÿ�:");
	scanf("%s", c);
	FILE *fp = fopen(c, "r");
	if (fp == NULL)
		printf("����");


	fclose(fp);
	return 0;
}