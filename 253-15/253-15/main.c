/*10/2 Ȳ���� ������ũ*/
#include<stdio.H>
int main(void)
{
	int a, b, c;
	c = 1000;
	printf("�ʱ⿬�ᷮ : %d\n", c);
	while (c >= 100){
		printf("���� ������ +, �Ҹ�� -�� �Է����ּ���:");
		scanf_s("%d", &b);
		c = b + c;
	}
	printf("(���) ���ᰡ 10�����Դϴ�.\n");
	return 0;

}