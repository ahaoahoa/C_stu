/*117p - 4 9/18 */
#include <stdio.h>
int main(void)
{
	double a;
	double p;
	printf("면적을 제곱미터 단위로 입력하시오:");
	scanf_s("%lf", &a);
	p = a * 0.3025217391;
	printf("%lf제곱미터는 %lf평입니다.", a, p);

	return 0;
}