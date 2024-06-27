#include<stdio.h>
main()
{
	int i, gokei, ave,flg;
	gokei = 0, ave = 0, flg = 0;
	printf("整数：");
	while (scanf("%d", &i) != EOF)
	{
		gokei += i;
		ave++;
		printf("整数：");
		flg = 1;
	}
	if (flg == 1) {
		printf("合計=%d\t平均＝%.2f", gokei, gokei / (float)ave);
	}
	if (flg == 0) {
		printf("合計＝０\t平均＝０");
	}
}
//{
//	int num, sum, cnt;
//	sum = cnt = 0;
//	printf("整数:");
//	while (scanf("%d", &num) != EOF) {
//		sum += num;
//		cnt++;
//		printf("整数:");
//	}
//	printf("合計=%d 平均=%.2f\n", sum, (float)sum / cnt);
//}