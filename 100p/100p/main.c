/*103p 9/18*/
#include <stdio.h>
int main(void)
{
	double speed = 300000;
	double dis = 149600000;
	double time;

	time = dis / speed;

	printf("빛의 속도는 %d\n", speed);
	printf("태양과 지구와의 거리 %d\n", dis);
	printf("도달 시간은 %d\n", time);

	return 0;

}
