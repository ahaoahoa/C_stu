/*10/2 Ȳ���� �Ҽ��ϱ�?*/
#include<stdio.h>
int main(void)
{
	int a, i, b;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &a);
	i = 2;

	while (i == 1000 || ){
		if (a%i == 0)
			printf("%d �� �Ҽ��� �ƴմϴ�.\n");
		else
			i++;
	}
	
	return 0;
}