/*10/2 Ȳ���� ���� ���߱�*/
#include<stdio.h>
int main(void)
{
	int answer = 41;
	int guess;
	int tries = 0;

	do {
		printf("������ �����Ͽ� ���ÿ�:");
		scanf_s("%d", &guess);
		tries++;

		if (guess > answer)
			printf("������ ������ �����ϴ�.\n");
		if (guess < answer)
			printf("������ ������ �����ϴ�.\n");

	} while (guess != answer);

	printf("�����մϴ� �õ�Ƚ�� = %d", tries);

	return 0;
}