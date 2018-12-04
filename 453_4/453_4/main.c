#include<stdio.h>
struct student{
	char name[20];
	char phone[30];
	union {
		struct{
			int hak;
			int num;
		};
	};
};
int main()
{
	struct student stu1 = { "kim", "010-3134-3123", 123, 321 };

}