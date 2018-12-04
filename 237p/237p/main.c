/*10/2 황성훈 구구단*/
#include<stdio.h>
int main(void)
{
	int i, k;
	for (i = 1; i <= 9; i++){
		for (k = 1; k <= 9; k++){
			printf("%d x %d = %d \n", i, k, i*k);
	    }
	}
	return 0;
}