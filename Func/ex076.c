#include<stdio.h>
void keisan(int a, int b, int *gokei, float *ave);
main()
{
	int a,b,c;
	
	float d;

	printf("整数を２つ入力:");
	scanf("%d%d", &a, &b);
	keisan(a, b,&c,&d);
	printf("合計は%d、平均は%.2f" ,c,d);
}
void keisan(int a, int b, int *gokei, float *ave)
{
	*gokei = a + b;
	*ave = *gokei / 2;
}