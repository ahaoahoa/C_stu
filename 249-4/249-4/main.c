/*10/2 Ȳ���� �������ϱ�*/
#include<stdio.h>
int main(void)
{
	int i, sum;
	i = 1;
	sum = 0;
	while (i){
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d", &i);
		sum += i;
		if (i == 0){
			break;
		}
	}
	printf("�հ�: %d", sum);
	return 0;

}