#include<stdio.h>
int main(void)
{
	int mid, fin, avg;
	char hak;
	printf("�߰���� ������ �Է�:");
	scanf_s("%d", &mid);

	printf("�⸻��� ������ �Է�:");
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
	printf("����� ������ %c �����Դϴ�.", hak);
	return 0;

}