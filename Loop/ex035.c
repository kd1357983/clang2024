#include<stdio.h>
main()
{
	int no, gokei;
	gokei = 0;
	
	while (1) {
		printf("�������āF");
		scanf("%d", &no);
		if (no == -999) break;
		gokei += no;
	}
	printf("%d", gokei);
}