#include<stdio.h>
main()
{
	int i;
	float  box[3],gokei;
	gokei = 0;
	for (i = 0; i <= 2; i++) {
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f",&box[i]);
	
		gokei += box[i];
	}
	printf("‡Œv‚Í%f‚Å‚·", gokei);
	printf("•½‹Ï‚Í%f‚Å‚·", gokei / 3);
}