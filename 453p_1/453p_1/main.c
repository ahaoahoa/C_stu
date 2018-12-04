/*11/20 황성훈 시간계산*/
#include<stdio.h>
struct time{
	int hour;
	int min;
	int sec;
};
int main()
{
	struct time start_time;
	struct time end_time;

	printf("시작 시간을 입력하시오:");
	scanf_s("%d %d %d", &start_time.hour, &start_time.min, &start_time.sec);
	printf("종료 시간을 입력하시오:");
	scanf_s("%d %d %d", &end_time.hour, &end_time.min, &end_time.sec);
	printf("소요시간 %d : %d : %d", end_time.hour - start_time.hour, end_time.min - start_time.min, end_time.sec - start_time.sec);
	return 0;
}