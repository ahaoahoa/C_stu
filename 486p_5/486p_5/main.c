#include<stdio.h>
int main()
{
	FILE *fp1, *fp2;
	int c, b, a = 0;
	fp1 = fopen("sample.txt", "r");
	fp2 = fopen("sample2.txt", "r");

	if (fp1 == NULL || fp2 == NULL){
		fprintf(stderr, "���� ����");
		exit(1);
	}

	while ((c = fgetc(fp1)) != EOF && (b = fgetc(fp2)!= EOF)){
		if (c == b){
			printf("���� �ʴ�.");
			a = 1;
			break;
		}
	}
	if (a == 0)
		printf("�� ������ ����");
	fclose(fp1);
	fclose(fp2);

	return 0;
}