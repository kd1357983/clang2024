#include<stdio.h>
main()
{
	int no, con;
	printf("���́H");
	scanf("%d", &no);
	do
	{
		con = 5;

		do {
			printf("*");
			con--;
		} while (con > 0);

		printf("\n");
		no--;
	}

	    while (no >=1);
	
}