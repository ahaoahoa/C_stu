#include<stdio.h>
#include<conio.h>
int main()
{
	char pass1[] = "1234";
	char pass2[] = "1234";
	char ch1, ch2, ch3, ch4;
	ch1 = _getch();
	_putch('*');
	pass2[0] = ch1;
	ch2 = _getch();
	_putch('*');
	pass2[1] = ch2;
	ch3 = _getch();
	_putch('*');
	pass2[2] = ch3;
	ch4 = _getch();
	_putch('*');
	pass2[3] = ch4;
	if (pass1 == pass2)
		printf("��й�ȣ ��ġ\n");
	else
		printf("��й�ȣ ����ġ\n");
	return 0;
}