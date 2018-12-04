#include<stdio.h>
int main(void)
{
	int mid, fin, avg;
	char hak;
	printf("중간고사 점수를 입력:");
	scanf_s("%d", &mid);

	printf("기말고사 점수를 입력:");
	scanf_s("%d", &fin);

	avg = (mid + fin) / 2;
	if (avg >= 90)
		hak = 'A';
	else if (avg >= 80)
		hak = 'B';
	else if (avg >= 70)
		hak = 'C';
	else if (avg >= 60)
		hak = 'D';
	else
		hak = 'F';
	printf("당신의 학점은 %c 학점입니다.", hak);
	return 0;

}