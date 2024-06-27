#include<stdio.h>
main()
{
	int no, gokei;
	gokei = 0;
	
	while (1) {
		printf("”‚ğ“ü‚ê‚ÄF");
		scanf("%d", &no);
		if (no == -999) break;
		gokei += no;
	}
	printf("%d", gokei);
}