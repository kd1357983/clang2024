#include<stdio.h>
main()
{
	int i;
	char data[]="orange";
	printf("文字列:");
	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c", data[i]);
	}
	printf("\n文字数は%dです", i);
}