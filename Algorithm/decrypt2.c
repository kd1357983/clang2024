#include<stdio.h>
main()
{
	char moji[80];
	int key, i, j;
	printf("文字列を入力してください");
	scanf("%s", &moji[0]); 
	for (i = 0; moji[i] != '\0'; i++) {
		printf("moji[%d]の復号化キー", i);
		scanf("%d",&key);
		moji[i] = moji[i] - key;
	}
	printf("復号化済みの文字列は、%s",&moji[0]);
}