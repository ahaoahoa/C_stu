/*103p 9/18*/
#include <stdio.h>
int main(void)
{
	double speed = 300000;
	double dis = 149600000;
	double time;

	time = dis / speed;

	printf("���� �ӵ��� %d\n", speed);
	printf("�¾�� �������� �Ÿ� %d\n", dis);
	printf("���� �ð��� %d\n", time);

	return 0;

}
