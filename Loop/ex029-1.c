#include<stdio.h>
main()
{
	int no;
	printf("数を入れて：");
	scanf("%d", &no);
	while (no > 0)
	{
		no = no - 1;
		printf("*");
	}

}
