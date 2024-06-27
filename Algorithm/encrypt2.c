#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char moji[80];
	char key[80];
	//int key[80];
	int  ran, i,j;
	printf("文字列を入力してください");
	scanf("%s", &moji[0]);
	srand(time(0));
	rand();
	for (i = 0; moji[i] != '\0'; i++) {
		ran = rand() % 6;
		moji[i] = moji[i] + ran;
		key[i] = ran+'0';
	}
	key[i] = '\0';
	printf("暗号化文字列は、%s\n",&moji[0]);
	printf("暗号化キーは、%s",&key[0]);
/*	printf("暗号化キーは、");
	for (j = 0; j < i; j++) {
		printf("%d", key[j]);
	}
	*/
}