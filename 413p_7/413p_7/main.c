/*11/13 Ȳ���� ���ڿ� �Ųٷ�*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	int len = 0;
	printf("put text");
	gets_s(str, 79);
	len = strlen(str);
	printf("%d", len);
	printf("%s", str);
	char tmp ='a';
	for (int i = 0; i < (len / 2); i++){
		tmp = str[i];
		str[i] = str[len - i];
		str[len - i] = tmp;
	}
	printf("%s", str);
	
	return 0;
}