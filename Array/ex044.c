#include<stdio.h>
main()
	{
		int i;
		char moji[50], moji2[50], hako[50];
		printf("文字列１を入力：");
		scanf("%s", &moji[0]);
		printf("文字列2を入力：");
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
		printf("入れ替えると\n");
		printf("moji1=%s     moji2=%s", &moji[0], &moji2[0]);
	}