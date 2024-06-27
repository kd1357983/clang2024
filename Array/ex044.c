#include<stdio.h>
main()
	{
		int i;
		char moji[50], moji2[50], hako[50];
		printf("•¶š—ñ‚P‚ğ“ü—ÍF");
		scanf("%s", &moji[0]);
		printf("•¶š—ñ2‚ğ“ü—ÍF");
		scanf("%s", &moji2[0]);
		printf("moji1=%s     moji2=%s\n", &moji[0], &moji2[0]);
		for (i = 0; hako[i] = moji[i]; i++) {
			//hako[i] = moji[i];
		}
		for (i = 0; moji[i] = moji2[i]; i++) {
			//moji[i] = moji2[i];
		}
		for (i = 0; moji2[i] = hako[i]; i++) {
			//moji2[i] = hako[i];
		}
		printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");
		printf("moji1=%s     moji2=%s", &moji[0], &moji2[0]);
	}