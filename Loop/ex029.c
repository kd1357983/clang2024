#include<stdio.h>
main()
/* {
	int no;
	printf("”‚ð“ü‚ê‚ÄF");
	scanf("%d", &no);
	while (no > 0)
	{
		no = no - 1;
		printf("*");
	}

}*/
{
	int no ,no2;
	no2 = 0;
	printf("”‚ð“ü‚ê‚ÄF");
	scanf("%d", &no);
	while (no > no2) {
		no2 = 1 + no2;
		printf("*");
	}
}