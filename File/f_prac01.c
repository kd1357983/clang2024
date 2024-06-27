#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE* fp;
	int score;
	char ch;
	char name[20];
	score = 0;
	printf("名前を入力");
	scanf("%s", name);
	while (1)
	{
	printf("現在のスコア %d('e'で終了)\n", score);
	ch = getch();
	if (ch == 'e') {
			break;
		}
		score++;
		
	} 
	fp = fopen("score.txt", "w");
	fprintf(fp, "名前　%s\nスコア　%d", name, score);
	fclose(fp);
	return 0;
}