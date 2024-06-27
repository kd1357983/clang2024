#include<stdio.h>
main()
{
	int no, hunn, byou, zikan, zikanamari;
	printf("秒数を入力：");
	scanf("%d", &no);
	if (0 <= no) 
	

		if (no <= 5000)
		{
			zikan = no / 3600;
			zikanamari = no % 3600;
			hunn = zikanamari / 60;
			byou = zikanamari % 60;
			printf("%d時間%d分%d秒です", zikan, hunn, byou);
		}

		else {
			printf("error");

		}
	

	else {
		printf("マイナスはエラーです");
	}

}

