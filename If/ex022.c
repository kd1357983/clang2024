#include<stdio.h>
main()
{
	int no;
	printf("西暦を入力：");
	scanf("%d", &no);
	if (no <= 1988) {
		printf("昭和生まれです");
	}
	else {
		printf("平成生まれです");
	}
}