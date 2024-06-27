#include<stdio.h>
main()
{
	int no,tate,yoko;
	printf("êîÇÕÅH");
	scanf("%d", &no);
	tate = 1;
	do {
		yoko = 0;
		do {
			printf("*");
			yoko++;
		} while (yoko < tate);
		printf("\n");
			tate++;
	} while (tate <= no);
}