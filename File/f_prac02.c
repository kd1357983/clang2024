#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE* fp;
	int max_score=0;
	int score;
	char ch;
	char max_name[20],name[20];
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", max_name, &max_score);
	fclose(fp);
	printf("最高得点　%s\nスコア:%d\n", max_name, max_score);
	printf("名前を入力");
	scanf("%s", name);
	score = 0;
	while (1)
	{
	printf("現在のスコア %d('e'で終了)\n", score);
	ch = getch();
	if (ch == 'e') {
			break;
		}
		score++;
		
	} 
	if (score > max_score) {
		fp = fopen("score.txt", "w");
		fprintf(fp, "名前　%s\nスコア　%d", name, score);
		fclose(fp);
	}
	return 0;
}