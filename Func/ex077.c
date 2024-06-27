#include<stdio.h>
void sort(int ,int ,int );
main()
{

	int data[3];
	printf("®”‚ğ‚R‚Â“ü—Í");
	scanf("%d%d%d", &data[0], &data[1], &data[2]);
	sort(data[0],data[1],data[2]);
	printf("Å‘å’l=%d Å¬’l=%d", data[2], data[0]);
}
void sort(int data[0], int data[1], int data[2] )
{

	int i,w;
	for (i = 0; i < 2; i++) {
		if (data[i] > data[i + 1]) {
			w = data[i];
			data[i] = data[i + 1];
			data[i + 1] = w;
		}
	}
}
//void sort(int a,int b,int c,int *dai,int *syou);
//main()
//{
//
//	int a,b,c,dai,syou;
//	printf("®”‚ğ‚R‚Â“ü—Í");
//	scanf("%d%d%d",&a,&b,&c);
//	sort(a,b,c,&dai,&syou);
//	printf("Å‘å’l=%d Å¬’l=%d", dai, syou);
//}
//void sort(int x, int y, int z, int *dai, int *syou)
//#define a x
//#define b y
//#define c z
//{
//	if (a > b) {
//		if (a > c)
//		{
//			if (b > c)
//			{
//				*dai = a;
//				*syou = c;
//			}
//			else
//			{
//				*dai = a;
//				*syou = b;
//			}
//		}
//		else {
//			*dai = c;
//			*syou = a;
//		}
//	}
//	//b>a
//	else {
//		if (b > c)
//		{
//
//			if (a > c)
//			{
//				*dai = b;
//				*syou = c;
//			}
//			else {
//				*dai = b;
//				*syou = a;
//			}
//		}
//		else {
//			*dai = c;
//			*syou = a;
//		}
//	}
//}
