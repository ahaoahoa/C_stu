#include<stdio.h>
struct employee
{
	int number;
	char name[20];
	char phone[20];
	int year;
};
int main()
{
	struct employee list[10] = {
		{ 1, "ȫ�浿1", "010-1234-1243", 20 },
		{ 2, "ȫ�浿2", "010-12312-12421", 32 },
		{ 3, "ȫ�浿3", "010-2314-4456", 23 },
		{4, "ȫ�浿4", "010-12312-12421", 32 },
		{ 5, "ȫ�浿5", "010-5345-4123", 43 },
		{ 6, "ȫ�浿6", "010-3544-1314", 41 },
		{ 7, "ȫ�浿6", "010-3544-1314", 41 },
		{ 8, "ȫ�浿6", "010-3544-1314", 41 },
		{ 9, "ȫ�浿6", "010-3544-1314", 41 },
		{ 10, "ȫ�浿6", "010-3544-1314", 41 }
	};
	for (int i = 0; i < 10; i++)
	{
		if (list[i].year >= 20 && list[i].year <= 30)
			printf("%s\n", list[i].name);
	}
	return 0;
}