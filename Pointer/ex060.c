#include<stdio.h>
main()
{
	char data[15] = "Language";
	char* p_data;
	char moji;
	int cnt;
	cnt = 1;
	p_data = data;
	printf("data[]=");
	while (*p_data) {
		printf("%c", *p_data);
		p_data++;
	}
	printf("\n");
	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c", &moji);
	printf("ŒŸõŒ‹‰Ê‚ÍA");
	p_data = data;
	while (*p_data)
	{
		if (*p_data == moji) 
		{
			printf(" %d ",cnt);
		}
		cnt++;
		p_data++;
	}
	printf("•¶š–Ú‚Å‚·");

}