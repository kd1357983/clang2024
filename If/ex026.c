#include<stdio.h>
main()
{
	int no;
	printf("�������:");
	scanf("%d", &no);
	if (no == 2) 
	{
		printf("�ŏI���͂Q�W���ł�");
	}
	else 
	{
		if (no == 4 ||no == 6 ||  no ==9 || no== 11)
		{
			printf("�ŏI���͂R�O���ł�");
		}
		else
		{
			printf("�ŏI���͂R�P���ł�");
		}
			
	}
}
