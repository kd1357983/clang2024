#include<stdio.h>
main()
{
	int i;
	char data[]="orange";
	printf("������:");
	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c", data[i]);
	}
	printf("\n��������%d�ł�", i);
}