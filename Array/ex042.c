#include<stdio.h>
main()
{
	int i;
	char data[] = "Aplle";
	i = 0;
	printf("１文字ずつ表示\n");
	while (data[i] != '\0')
	{
		printf("%c", data[i]);
		i++;
	}
	printf("\n文字列で表示\n");
	printf("%s", &data[0]);
}
	