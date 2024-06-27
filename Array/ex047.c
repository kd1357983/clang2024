#include<stdio.h>
main()
{
	int i, k;
	float x[3][2],gokei;
	for (i = 0, k = 0, gokei = 0; k <= 2; k++) {
		for (i = 0, gokei = 0; i < 2; i++) {
			printf("x[%d][%d]=",k,i);
			scanf("%f", &x[k][i]);
			gokei += x[k][i];
		}
		printf("%ds–Ú‚Ì•½‹Ï%.2f\n",k,gokei/2);
	}
}