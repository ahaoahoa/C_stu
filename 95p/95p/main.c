/*95p 9/18*/

#include <stdio.h>
int main(void)
{
	int pro;
	long long int saving;

	printf("�Ŵ� ���� �ݾ��� �Է��Ͻÿ�:");
	scanf_s("%d", &saving);

	pro = saving * 12 * 30;
	printf("30�� ���� ��� = %lld�� \n", pro);
	return 0;
}