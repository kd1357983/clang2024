#include<stdio.h>
main()
{
	int no,tate,yoko,con;
	printf("”‚ÍH:");
	scanf("%d",&no);
	for (tate = 1; tate == no; tate++)
	{
		for (yoko = 0; yoko < no; yoko++) {

			printf(" ");
		}

		for (con = 0; con == tate; con++) {
			printf("*");
		}
		printf("\n");
	}
}