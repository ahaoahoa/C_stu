#include<stdio.h>
struct sosu {
	double z;
	double b;
};
int main()
{
	struct sosu a, b;
	printf("ù��° ���Ҽ��� �Է��Ͻÿ�(a, b):");
	scanf_s("%lf %lf", &a.z, &a.b);
	printf("�ι�° ���Ҽ��� �Է��Ͻÿ�(a, b):");
	scanf_s("%lf %lf", &b.z, &b.b);

	printf("%lf + %lf i", a.z + b.z, a.b + b.b);
	return 0;
}