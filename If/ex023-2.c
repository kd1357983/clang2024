#include<stdio.h>
main()
{
	int no, amari;
	printf("西暦を入力：");
	scanf("%d", &no);
		amari = no / 4;
		if (amari== 0)
		{
			printf("うるう年です");
		}
		else
		{
			printf("うるう年ではないです");
		}
}
