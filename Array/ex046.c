#include <stdio.h>
main()
{
	int i,k, gokei;
	int a[][3] = { { 10, 20, 30 },{ 1, 2, 3 } };
	for (k = 0, i = 0, gokei = 0; k <= 1; k++) {
		for (i = 0, gokei = 0; i < 3; i++) {
			printf("a[%d][%d]=%d\n", k, i, a[k][i]);
			gokei += a[k][i];

		}
		printf("%ds–Ú‚Ì‡Œv%d\n\n", k, gokei);
	}
	
	
	
}