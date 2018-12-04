#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	printf("문자열을 입력해주세요:");
	scanf_s("%s", str);
	int len = strlen(str);
	for (int i = 0; i < len;i++)
		if (str[i] = ' '){
			str[i] = str[i + 1];
		}
	printf("%s", str);
	return 0;
}