#include<stdio.h>
main()
{
	int a, b, c, ret;
	printf("3つの整数を空白で区切って入力：");
	ret = scanf("%d %d %d\n", &a, &b, &c);
	printf("ret=%d\na=%d\nb=%d\nc=%d", ret, a, b, c);
	printf("整数を入力（Ctrl+Zで終了）a:");
	while (scanf("%d", &a) != EOF) {
		printf("a=%d\n", a);
		printf("整数を入力（Ctrl+Zで終了）a:");
	}

}