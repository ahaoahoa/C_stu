/*11/20 Ȳ���� �ð����*/
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

	printf("���� �ð��� �Է��Ͻÿ�:");
	scanf_s("%d %d %d", &start_time.hour, &start_time.min, &start_time.sec);
	printf("���� �ð��� �Է��Ͻÿ�:");
	scanf_s("%d %d %d", &end_time.hour, &end_time.min, &end_time.sec);
	printf("�ҿ�ð� %d : %d : %d", end_time.hour - start_time.hour, end_time.min - start_time.min, end_time.sec - start_time.sec);
	return 0;
}