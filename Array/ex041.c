#include<stdio.h>
main()
{
	int i;
	float  box[3],gokei;
	gokei = 0;
	for (i = 0; i <= 2; i++) {
		printf("実数を入力:");
		scanf("%f",&box[i]);
	
		gokei += box[i];
	}
	printf("合計は%fです", gokei);
	printf("平均は%fです", gokei / 3);
}