#include<stdio.h>
main()
{
	float no, no2, no3;
	printf("1つ目の実数：");
	scanf("%f", &no);
	printf("2つ目の実数：");
	scanf("%f", &no2);
	printf("3つ目の実数：");
	scanf("%f", &no3);
	printf("合計＝%.2f平均＝%.2f\n", no + no2 + no3, (no + no2 + no3) / 3);
}