#include<stdio.h>
main()
{
	int no;
	printf("月を入力:");
	scanf("%d", &no);
	if (no == 2) 
	{
		printf("最終日は２８日です");
	}
	else 
	{
		if (no == 4 ||no == 6 ||  no ==9 || no== 11)
		{
			printf("最終日は３０日です");
		}
		else
		{
			printf("最終日は３１日です");
		}
			
	}
}
