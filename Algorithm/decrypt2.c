#include<stdio.h>
main()
{
	char moji[80];
	int key, i, j;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", &moji[0]); 
	for (i = 0; moji[i] != '\0'; i++) {
		printf("moji[%d]‚Ì•œ†‰»ƒL[", i);
		scanf("%d",&key);
		moji[i] = moji[i] - key;
	}
	printf("•œ†‰»Ï‚İ‚Ì•¶š—ñ‚ÍA%s",&moji[0]);
}