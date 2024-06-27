#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int play, con;
	printf("何を出しますか？\n(1:グー　2：チョキ　3:パー　＞");
	scanf("%d", &play);
	srand(time(0));
	rand();
	con = rand() % 3;
	if (play == 1)  
	{
		if (con == 0) {
			printf("あいこです");
		}
		if (con == 1) {
			printf("プレイヤーの勝ちです");
		}
		if (con == 2) {
			printf("コンピュータの勝ちです");
		}
	}
	if (play == 2) {
		if (con == 0) {
			printf("コンピュータの勝ちです");
		}
		if (con == 1) {
			printf("あいこです");
		}
		if (con == 2) {
			printf("プレイヤーの勝ちです");
		}
	}
	if (play == 3) {
		if (con == 0) {
			printf("プレイヤーの勝ちです");
		}
		if (con == 1) {
			printf("コンピュータの勝ちです");
		}
		if (con == 2) {
			printf("あいこです");
		}
	}
}