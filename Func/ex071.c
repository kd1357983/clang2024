#include<stdio.h>
//int   add(int a, int b, int c);
//float add(int a, int b, int c);
//main() {
//	int a, b, c, gokei,heikin;
//	printf("整数を３つ入力;");
//	scanf("%d%d%d", &a, &b, &c);
//	gokei = add(a, b, c);
//	heikin = add(a, b, c);
//	printf("合計は%dです　平均は%dです" = gokei, heikin);
//}
//int add(int a, int b, int c)
//{
//	int goukei;
//	goukei = a + b + c;
//	return(goukei);
//}
//float add(int a, int b, int c) {
//	int heiki;
//	heiki = (a + b + c) / 3;
//	return(heiki);
//}
		int gokei(int, int, int);
		float heikin(int, int, int);
		main()
		{
		int d1, d2, d3;
		printf("整数を3つ入力:");
		scanf("%d%d%d", &d1, &d2, &d3);
		printf("合計は %d、平均は %.2f\n", gokei(d1, d2, d3), heikin(d1, d2, d3));
		}
		int gokei(int d1, int d2, int d3)
		{
		return d1 + d2 + d3;
		}
		float heikin(int d1, int d2, int d3)
		{
		return (float)gokei(d1, d2, d3) / 3;
		}
	