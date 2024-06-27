#include<stdio.h>
void keisan(int a, int b, int *gokei, float *ave);
main()
{
	int a,b,c;
	
	float d;

	printf("®”‚ğ‚Q‚Â“ü—Í:");
	scanf("%d%d", &a, &b);
	keisan(a, b,&c,&d);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f" ,c,d);
}
void keisan(int a, int b, int *gokei, float *ave)
{
	*gokei = a + b;
	*ave = *gokei / 2;
}