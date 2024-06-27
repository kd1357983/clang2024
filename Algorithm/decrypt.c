#include<stdio.h>
main()
{
	char moji[80];
	int i;
	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s",&moji[0]);
	for (i = 0; moji[i]!='\0'; i++) {
		moji[i] = moji[i] - 1;
	}
	printf("%s",&moji[0]);
}