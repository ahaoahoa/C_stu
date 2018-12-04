#include<stdio.h>
struct sosu {
	double z;
	double b;
};
int main()
{
	struct sosu a, b;
	printf("첫번째 복소수를 입력하시오(a, b):");
	scanf_s("%lf %lf", &a.z, &a.b);
	printf("두번째 복소수를 입력하시오(a, b):");
	scanf_s("%lf %lf", &b.z, &b.b);

	printf("%lf + %lf i", a.z + b.z, a.b + b.b);
	return 0;
}