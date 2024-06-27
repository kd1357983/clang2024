#include<stdio.h>
main()
{
	int i;
	char data[] = "Aplle";
	i = 0;
	printf("‚P•¶Žš‚¸‚Â•\Ž¦\n");
	while (data[i] != '\0')
	{
		printf("%c", data[i]);
		i++;
	}
	printf("\n•¶Žš—ñ‚Å•\Ž¦\n");
	printf("%s", &data[0]);
}
	