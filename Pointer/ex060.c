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
	printf("検索文字は？");
	scanf("%c", &moji);
	printf("検索結果は、");
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
	printf("文字目です");

}