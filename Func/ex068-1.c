#include<stdio.h>
main()
{
	int a, b, c, ret;
	printf("3�̐������󔒂ŋ�؂��ē��́F");
	ret = scanf("%d %d %d\n", &a, &b, &c);
	printf("ret=%d\na=%d\nb=%d\nc=%d", ret, a, b, c);
	printf("��������́iCtrl+Z�ŏI���ja:");
	while (scanf("%d", &a) != EOF) {
		printf("a=%d\n", a);
		printf("��������́iCtrl+Z�ŏI���ja:");
	}

}