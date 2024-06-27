#include<stdio.h>
main()
{
	int no,gokei;
	float count;
	printf("数は？", no);
	scanf("%d",&no);
	for (gokei = 0, count = 0; no != -999; count++)
	{
		gokei += no;
		printf("数は？", no);
		scanf("%d",&no);
	}
	if (count == 0) {
		printf("合計＝%d   平均＝%.2f", gokei, gokei / (count + 1));
	}
	else

	{
		printf("合計＝%d        平均＝%.2f", gokei, gokei / count);
	}
}