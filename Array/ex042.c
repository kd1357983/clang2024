#include<stdio.h>
main()
{
	int i;
	char data[] = "Aplle";
	i = 0;
	printf("�P�������\��\n");
	while (data[i] != '\0')
	{
		printf("%c", data[i]);
		i++;
	}
	printf("\n������ŕ\��\n");
	printf("%s", &data[0]);
}
	